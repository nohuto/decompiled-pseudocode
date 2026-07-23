/*
 * XREFs of sub_140939830 @ 0x140939830
 * Callers:
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1409780D4 @ 0x1409780D4 (sub_1409780D4.c)
 */

__int64 __fastcall sub_140939830(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  ULONG_PTR *v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  ULONG_PTR v12; // rax
  char v13; // r15
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]

  v6 = (ULONG_PTR *)(a2 + 2);
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  v16 = 0LL;
  *a2 = 0;
  v15 = a1;
  for ( i = 0LL; ; i = v11 )
  {
    v10 = (struct _EX_RUNDOWN_REF *)sub_1407B6B90(i);
    v11 = v10;
    if ( !v10 )
      break;
    v12 = sub_14066B3D8(v10);
    if ( v12 )
    {
      LOBYTE(v16) = v11 == *((struct _EX_RUNDOWN_REF **)KeGetCurrentThread() + 23);
      v13 = ExEnumHandleTable(v12, (__int64)sub_140881750, (__int64)&v15, 0LL);
      sub_1402AD030(v11 + 139);
    }
    else
    {
      v13 = 0;
    }
    if ( v13 || (unsigned int)sub_1409780D4(v11, a1) )
    {
      if ( v8 < v7 )
      {
        *v6 = v11[136].Count;
        ++*a2;
        ++v6;
      }
      ++v8;
    }
  }
  *a4 = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
