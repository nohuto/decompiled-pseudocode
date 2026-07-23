/*
 * XREFs of sub_140946508 @ 0x140946508
 * Callers:
 *     sub_140560680 @ 0x140560680 (sub_140560680.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 */

__int64 __fastcall sub_140946508(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v6; // rcx
  ULONG_PTR v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v12 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    v9 = (struct _EX_RUNDOWN_REF *)sub_1407B6B90(v6);
    v10 = v9;
    if ( !v9 )
      break;
    v8 = sub_14066B3D8(v9);
    if ( v8 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = v10;
      *(_QWORD *)&v13 = a2;
      *((_QWORD *)&v13 + 1) = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(v8, (__int64)sub_1409465D0, (__int64)&v12, 0LL);
      sub_1402AD030(v10 + 139);
      if ( v3 )
      {
        ObfDereferenceObjectWithTag(v10, 0x6E457350u);
        return v3;
      }
    }
    v6 = v10;
  }
  return v3;
}
