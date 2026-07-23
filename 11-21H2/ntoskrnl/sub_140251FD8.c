/*
 * XREFs of sub_140251FD8 @ 0x140251FD8
 * Callers:
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_1403915EC @ 0x1403915EC (sub_1403915EC.c)
 *     sub_140396364 @ 0x140396364 (sub_140396364.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     sub_140397D10 @ 0x140397D10 (sub_140397D10.c)
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403B0C40 @ 0x1403B0C40 (sub_1403B0C40.c)
 *     sub_1403B0CB0 @ 0x1403B0CB0 (sub_1403B0CB0.c)
 *     sub_1403B6180 @ 0x1403B6180 (sub_1403B6180.c)
 *     sub_1403B9214 @ 0x1403B9214 (sub_1403B9214.c)
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 *     sub_14050A60C @ 0x14050A60C (sub_14050A60C.c)
 *     sub_14051DB60 @ 0x14051DB60 (sub_14051DB60.c)
 *     sub_140524190 @ 0x140524190 (sub_140524190.c)
 *     sub_140A521EC @ 0x140A521EC (sub_140A521EC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140251FD8(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v4; // r10d
  int v5; // ebx
  int v6; // r8d
  __int16 v8; // [rsp+30h] [rbp-8h]

  v3 = *(_DWORD *)(a3 + 12);
  v4 = v3 | 1;
  v5 = a1;
  if ( (v3 & 0x30) != 0x10 )
    v4 = *(_DWORD *)(a3 + 12) & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 12) = v4;
  if ( (*(_DWORD *)(a1 + 228) & 0x200) != 0 )
  {
    _disable();
    v6 = sub_14042A5E0(*(_QWORD *)(a1 + 16), a2);
    if ( (v8 & 0x200) != 0 )
      _enable();
  }
  else
  {
    v6 = sub_14042A5E0(*(_QWORD *)(a1 + 16), a2);
  }
  if ( v6 < 0 )
    sub_14051E038(v5, 7, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3173);
  return (unsigned int)v6;
}
