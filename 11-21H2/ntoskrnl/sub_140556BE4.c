/*
 * XREFs of sub_140556BE4 @ 0x140556BE4
 * Callers:
 *     sub_14020B830 @ 0x14020B830 (sub_14020B830.c)
 *     sub_1402AACD0 @ 0x1402AACD0 (sub_1402AACD0.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 * Callees:
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     sub_1402E08F8 @ 0x1402E08F8 (sub_1402E08F8.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_140386368 @ 0x140386368 (sub_140386368.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

int __fastcall sub_140556BE4(__int64 a1)
{
  char v2; // si
  const GUID *RelatedActivityId; // rdi
  const EVENT_DESCRIPTOR *v4; // r15
  struct _KTHREAD *CurrentThread; // rbx
  GUID *v6; // rbx
  __int64 v7; // rcx
  _WORD *v8; // rax
  char v10; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+60h] [rbp-48h] BYREF
  __m128i v12; // [rsp+70h] [rbp-38h] BYREF

  ActivityId = 0LL;
  v12 = 0LL;
  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
  {
    v6 = (GUID *)*((_QWORD *)CurrentThread + 190);
    if ( v6 )
    {
      if ( sub_140386368(&stru_140038730) )
      {
        RelatedActivityId = v6;
        v4 = &stru_140038730;
        goto LABEL_18;
      }
      ActivityId = *v6;
LABEL_17:
      v2 = 1;
      goto LABEL_18;
    }
    if ( sub_1402E08F8() && (*(_BYTE *)(a1 + 71) & 0x21) != 0x21 )
    {
      v10 = 0;
      if ( KeGetPcr()->NtTib.Self )
      {
        v12 = *(__m128i *)&KeGetPcr()->NtTib.Self[105].SubSystemTib;
        v10 = 1;
      }
      if ( v10 )
      {
        v7 = -v12.m128i_i64[0];
        if ( !v12.m128i_i64[0] )
          v7 = -_mm_srli_si128(v12, 8).m128i_i64[0];
        if ( v7 )
        {
          if ( sub_140386368(&stru_140038860) )
          {
            RelatedActivityId = (const GUID *)&v12;
            v4 = &stru_140038860;
            goto LABEL_18;
          }
          ActivityId = (GUID)v12;
          goto LABEL_17;
        }
      }
    }
  }
LABEL_18:
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v8) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v8 >= 0 )
  {
    v8 = *(_WORD **)(a1 + 200);
    *v8 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v8) = EtwWriteEx(qword_140C47358, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v8;
}
