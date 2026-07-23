/*
 * XREFs of sub_140A4E4B0 @ 0x140A4E4B0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409E1EFC @ 0x1409E1EFC (sub_1409E1EFC.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A4E8E4 @ 0x140A4E8E4 (sub_140A4E8E4.c)
 */

__int64 __fastcall sub_140A4E4B0(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rdi
  int v2; // ebx
  unsigned __int8 CurrentIrql; // cl
  int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 *v10[2]; // [rsp+40h] [rbp-19h] BYREF
  __int16 v11; // [rsp+50h] [rbp-9h]
  int v12; // [rsp+52h] [rbp-7h]
  __int16 v13; // [rsp+56h] [rbp-3h]
  struct _KDPC Dpc; // [rsp+60h] [rbp+7h] BYREF
  int v15; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  Affinity = 0LL;
  memset(&Dpc, 0, 60);
  if ( !(_DWORD)BugCheckParameter3 )
  {
    if ( (BYTE4(xmmword_140D06910) & 1) != 0 )
      sub_1409E1EFC();
    KeSetEvent(qword_140C54898, 0, 1u);
    KeWaitForSingleObject(&qword_140C54898[1], Executive, 0, 0, 0LL);
    v2 = sub_140A4E8E4((PVOID)qword_140C22800);
    if ( v2 >= 0 )
    {
      Affinity.Reserved[1] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(dword_140D0E5E0[0] >> 6);
      Affinity.Mask = 1LL << (dword_140D0E5E0[0] & 0x3F);
      Affinity.Reserved[2] = 0;
      KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v8 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
      memset(&qword_140C54800, 0, 0x50uLL);
      dword_140C54830 = dword_140D06884;
      HIDWORD(qword_140C54838) = dword_140D06884;
      LODWORD(qword_140C54838) = 1;
      if ( ((unsigned __int8)&stru_140C54840 & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      stru_140C54840 = 0LL;
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)sub_140A4B520, &qword_140C54800);
      v10[1] = (unsigned __int16 *)qword_140D06E48[0];
      v10[0] = (unsigned __int16 *)dword_140D06E40;
      Dpc.Importance = 2;
      v11 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v15, v10) )
      {
        if ( v15 )
        {
          v4 = dword_140C54834;
          if ( !Dpc.DpcData )
            Dpc.Number = v15 + 2048;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v4 == dword_140C54834 )
            ;
        }
      }
      goto LABEL_20;
    }
    goto LABEL_24;
  }
  if ( (_DWORD)BugCheckParameter3 != 1 )
  {
    v2 = -1073741823;
    goto LABEL_24;
  }
  v2 = *(_DWORD *)(qword_140C22800 + 188);
  if ( v2 < 0 || (v2 = sub_140A4AF0C(dword_140C0973C, qword_140C22800), v2 < 0) )
  {
LABEL_24:
    sub_1403D99B4((ULONG)&byte_140C227C0, (PVOID)0x1C8);
    if ( *(_QWORD *)&qword_140C227F8 )
      sub_1403D99B4(qword_140C227F8, (PVOID)0x1D8);
    if ( qword_140C22800 )
    {
      sub_1403D99B4(qword_140C22800, (PVOID)0x1C8);
      v6 = *(_QWORD *)(qword_140C22800 + 168);
      if ( v6 )
        sub_1403D99B4(v6, (PVOID)0x178);
      v7 = *(_QWORD *)(qword_140C22800 + 200);
      if ( v7 )
        sub_1403D99B4(v7, (PVOID)0x448);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( byte_140C223A8 )
    v2 = 1073742484;
LABEL_20:
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
