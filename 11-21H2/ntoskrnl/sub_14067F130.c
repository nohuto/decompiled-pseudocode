/*
 * XREFs of sub_14067F130 @ 0x14067F130
 * Callers:
 *     sub_14090E860 @ 0x14090E860 (sub_14090E860.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14067F130(int a1, int a2, int a3, int a4, HANDLE Handle)
{
  KPROCESSOR_MODE v9; // r9
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // edi
  KPROCESSOR_MODE v15; // r9
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-30h] BYREF

  *(_OWORD *)v19 = 0LL;
  sub_140347770((__int64)v19);
  if ( !(unsigned __int8)sub_140AB46D0() )
  {
    v14 = -1073741431;
    goto LABEL_8;
  }
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 4u, qword_140C490F0, v9, &Object, 0LL);
  v13 = (__int64)Object;
  v14 = v10;
  if ( v10 != -1073741788 )
  {
    if ( v10 < 0 )
      goto LABEL_5;
    v13 = (unsigned __int64)Object | 1;
    goto LABEL_4;
  }
  v15 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v15, &Object, 0LL);
  v13 = (__int64)Object;
  v14 = v16;
  if ( v16 >= 0 )
LABEL_4:
    v14 = sub_1407CABA0(a1, a2, a3, a4, v13, *((_BYTE *)KeGetCurrentThread() + 562));
LABEL_5:
  if ( v13 )
    sub_14067F788(v13);
  sub_140AB42A0(v12, v11);
LABEL_8:
  sub_14022EA30(v19);
  return v14;
}
