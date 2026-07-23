/*
 * XREFs of sub_1403A0800 @ 0x1403A0800
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140809060 @ 0x140809060 (sub_140809060.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_14080B708 @ 0x14080B708 (sub_14080B708.c)
 *     sub_14080B778 @ 0x14080B778 (sub_14080B778.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403A0800(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebx
  PVOID v10; // rax
  __int128 v12; // [rsp+58h] [rbp-39h] BYREF
  __int128 v13; // [rsp+68h] [rbp-29h]
  __int128 v14; // [rsp+78h] [rbp-19h]
  PVOID P[10]; // [rsp+88h] [rbp-9h] BYREF

  v8 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  memset(P, 0, sizeof(P));
  sub_14080B778(&v12);
  if ( (v13 & 0xFFFFFFDF) != 0 )
  {
    sub_1402D66A8((ULONG_PTR)&xmmword_140C20768);
    v10 = qword_140C20778;
    qword_140C20778 = 0LL;
    P[0] = v10;
    LODWORD(v10) = dword_140C20780;
    dword_140C20780 = 0;
    LODWORD(P[1]) = (_DWORD)v10;
    sub_1402935D0((ULONG_PTR)&xmmword_140C20768);
    *(_OWORD *)&P[4] = v12;
    P[6] = *((PVOID *)&v13 + 1);
    *(_OWORD *)&P[7] = v14;
    sub_140809060(&P[2], &P[3]);
    sub_14080B708(&P[9]);
    v8 = DbgkWerCaptureLiveKernelDump((unsigned int)L"IdlePhaseWatchdog", a2, a3, a4, a5, a6, 0LL, 0LL, 0);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x67696450u);
  if ( P[2] )
    ExFreePoolWithTag(P[2], 0x67696450u);
  if ( P[4] )
    ExFreePoolWithTag(P[4], 0x54445050u);
  if ( P[5] )
    ExFreePoolWithTag(P[5], 0x54445050u);
  if ( P[6] )
    ExFreePoolWithTag(P[6], 0x54445050u);
  if ( P[7] )
    ExFreePoolWithTag(P[7], 0x54445050u);
  if ( P[8] )
    ExFreePoolWithTag(P[8], 0x54445050u);
  if ( P[9] )
    ExFreePoolWithTag(P[9], 0x67696450u);
  return v8;
}
