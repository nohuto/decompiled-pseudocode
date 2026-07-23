/*
 * XREFs of sub_140970AB4 @ 0x140970AB4
 * Callers:
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1409682E4 @ 0x1409682E4 (sub_1409682E4.c)
 */

__int64 __fastcall sub_140970AB4(__int64 a1, __int64 a2, struct _MDL **a3)
{
  struct _MDL *v4; // rdi
  __int64 v7; // r14
  char *v8; // rax
  int v9; // ebx
  ULONG v10; // edx
  unsigned int v11; // esi
  PMDL Mdl; // rax
  struct _MDL *v13; // rcx
  __int64 v14; // rdx
  ULONG_PTR v15; // rbp
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0;
  v4 = 0LL;
  v7 = 0LL;
  v8 = sub_14026DFC0(1);
  v9 = sub_1409682E4(a2, (__int64)v8);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 64);
    v11 = (v10 >> 12) + ((v10 & 0xFFF) != 0);
    if ( a3 )
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), v10, 0, 0, 0LL);
      v4 = Mdl;
      if ( !Mdl )
        return (unsigned int)-1073741670;
      v7 = (__int64)&Mdl[1];
      if ( v11 )
      {
        v13 = Mdl + 1;
        v14 = v11;
        do
        {
          v13->Next = (struct _MDL *)qword_140C53288;
          v13 = (struct _MDL *)((char *)v13 + 8);
          --v14;
        }
        while ( v14 );
      }
    }
    v9 = sub_140581D58(a2, 0, v11 - 1, 2, (__int64)v4);
    if ( v9 >= 0 && a3 )
    {
      v15 = sub_1403095B0((__int64)&qword_140C534C0, v11);
      if ( v15 )
      {
        v9 = sub_140308F00(v15, v11, v7, 4u, 2, &v17);
        v4->MdlFlags |= 1u;
        v4->MappedSystemVa = (PVOID)((__int64)(v15 << 25) >> 16);
        *a3 = v4;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
    }
    if ( v4 )
      IoFreeMdl(v4);
  }
  return (unsigned int)v9;
}
