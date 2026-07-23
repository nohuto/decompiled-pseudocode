/*
 * XREFs of sub_140A114F0 @ 0x140A114F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A11614 @ 0x140A11614 (sub_140A11614.c)
 *     sub_140A124A4 @ 0x140A124A4 (sub_140A124A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A114F0(_DWORD *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // esi
  __int64 v9; // rdi
  int v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch] BYREF
  int v13; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+5Ch] [rbp-14h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v17 = 0x2000;
  *a1 = 0;
  v14 = 0;
  v13 = 0;
  v16 = 0LL;
  P = 0LL;
  v12 = 0;
  v11 = 0;
  if ( (unsigned int)sub_140A124A4(
                       a3,
                       a5,
                       (unsigned int)&v16,
                       (unsigned int)&P,
                       (__int64)&v12,
                       (__int64)&v11,
                       (__int64)&v17)
    && (v9 = a6, (unsigned int)sub_140A11614(a2, a6, v16, (_DWORD)P, v12, v11, v17, (__int64)&v14, (__int64)&v13)) )
  {
    v6 = 1;
    *(_DWORD *)(v9 + 80) |= v13;
    *a1 = v14;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingText");
  }
  if ( P )
    ExFreePoolWithTag(P, 0x74705041u);
  return v6;
}
