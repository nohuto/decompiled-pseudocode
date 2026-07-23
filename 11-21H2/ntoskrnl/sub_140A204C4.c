/*
 * XREFs of sub_140A204C4 @ 0x140A204C4
 * Callers:
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140A1D4A4 @ 0x140A1D4A4 (sub_140A1D4A4.c)
 *     sub_140A20D6C @ 0x140A20D6C (sub_140A20D6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A204C4(__int64 a1, void *a2, PVOID *a3, unsigned int *a4)
{
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  char *v11; // rbp
  int v12; // r12d
  _DWORD *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rdi
  int v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+24h] [rbp-24h] BYREF
  PVOID P; // [rsp+28h] [rbp-20h] BYREF

  v19 = 0;
  v20 = 0;
  P = 0LL;
  v8 = sub_140A1D4A4((__int64)a2, 0x23000003u, (GUID **)&P, &v20);
  LODWORD(v9) = v8;
  if ( v8 == -1073741275 )
  {
LABEL_21:
    LODWORD(v9) = 0;
    goto LABEL_22;
  }
  if ( v8 >= 0 )
  {
    sub_14080271C(a2, 0x23000003u);
    v9 = 0LL;
    if ( (int)sub_140A20D6C(a1, P, &v19) >= 0 )
    {
      v10 = *a4;
      v11 = (char *)*a3;
      v12 = v19;
      if ( !*a4 )
        goto LABEL_10;
      v13 = *a3;
      do
      {
        if ( *v13 == v19 )
          break;
        v9 = (unsigned int)(v9 + 1);
        ++v13;
      }
      while ( (unsigned int)v9 < v10 );
      if ( (_DWORD)v9 || !v10 )
      {
LABEL_10:
        v14 = v10 + 1;
        if ( (_DWORD)v9 != v10 )
          v14 = *a4;
        v15 = v14;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v14, 0x4B444342u);
        v17 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v9) = -1073741670;
          goto LABEL_22;
        }
        *PoolWithTag = v12;
        if ( (_DWORD)v9 )
          memmove(PoolWithTag + 1, v11, 4LL * (unsigned int)v9);
        if ( (unsigned int)v9 < v15 - 1 )
          memmove(&v17[(unsigned int)v9 + 1], &v11[4 * v9 + 4], 4LL * (v15 - (unsigned int)v9 - 1));
        if ( *a3 )
          ExFreePoolWithTag(*a3, 0x4B444342u);
        *a3 = v17;
        *a4 = v15;
      }
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  return (unsigned int)v9;
}
