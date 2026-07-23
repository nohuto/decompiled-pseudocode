/*
 * XREFs of sub_14067259C @ 0x14067259C
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_140205DD4 @ 0x140205DD4 (sub_140205DD4.c)
 *     sub_140205DEC @ 0x140205DEC (sub_140205DEC.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     sub_1406727EC @ 0x1406727EC (sub_1406727EC.c)
 *     sub_140672A7C @ 0x140672A7C (sub_140672A7C.c)
 *     sub_140672A98 @ 0x140672A98 (sub_140672A98.c)
 *     sub_140672AD0 @ 0x140672AD0 (sub_140672AD0.c)
 *     sub_140672BD8 @ 0x140672BD8 (sub_140672BD8.c)
 *     sub_140672D48 @ 0x140672D48 (sub_140672D48.c)
 *     sub_140673010 @ 0x140673010 (sub_140673010.c)
 *     sub_1406E7994 @ 0x1406E7994 (sub_1406E7994.c)
 */

__int64 __fastcall sub_14067259C(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // r15
  unsigned int *v8; // rbp
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 ProcessServerSilo; // rax
  __int64 v15; // r9
  int v16; // ebx
  ULONG_PTR v17; // rdx
  unsigned int v18; // eax
  __int64 result; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-70h]
  __int128 v22; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h]

  RegionSize = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v8 = *(unsigned int **)(a4 + 208);
  v10 = (*(unsigned __int8 *)(a4 + 9) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  v22 = 0LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = (__int128 *)(v8 + 8);
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 288) )
  {
    v5 = &v22;
    result = sub_1406E7994(a1, &v22);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v8[2];
  v13 = v12 & 0x60;
  if ( (dword_140D3CB34 & 1) != 0 )
  {
    v12 |= 0x8000u;
    v8[2] = v12;
  }
  if ( !v8[259] )
    v8[259] = dword_140D3CD58;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)a2);
  if ( *((_BYTE *)sub_140204738(ProcessServerSilo) + 1048) )
    v8[2] = v12 | 0x20000000;
  sub_14030D5C0((ULONG_PTR)a2, 0LL, a3, v15);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (v16 = sub_140673010(a2, a4), v16 >= 0) )
  {
    v17 = *v8 + *((_QWORD *)v8 + 126);
    RegionSize = v17;
    if ( !v13 )
    {
      if ( v17 < 0x20000 )
        v17 = 0x20000LL;
      RegionSize = v17;
    }
    *(_QWORD *)(a4 + 216) = 0LL;
    v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a4 + 216), 0LL, &RegionSize, 0x3000u, 4u);
    if ( v16 >= 0 )
    {
      v16 = sub_140672D48(a1, v5, a4);
      if ( v16 >= 0 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 992LL) & 1) != 0
          || (v16 = sub_1406727EC(0LL, a4), v16 >= 0) )
        {
          v16 = sub_140205DEC((__int64)a2, a4);
          if ( v16 >= 0 )
          {
            if ( !a2[176] || (v18 = sub_140672A7C(a2), v16 = sub_1406727EC(v18, a4), v16 >= 0) )
            {
              sub_140205DD4(a2);
              sub_140672BD8(CurrentThread, a2);
              v16 = sub_140672AD0(a2);
              if ( v16 >= 0 )
                v16 = sub_140672A98(a2);
            }
          }
        }
      }
    }
  }
  sub_1402D0930(a3, 0LL);
  return (unsigned int)v16;
}
