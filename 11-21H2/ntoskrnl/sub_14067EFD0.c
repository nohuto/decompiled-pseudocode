/*
 * XREFs of sub_14067EFD0 @ 0x14067EFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14067EFD0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        HANDLE Handle)
{
  KPROCESSOR_MODE v10; // r9
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned int v15; // edi
  KPROCESSOR_MODE v16; // r9
  NTSTATUS v17; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-20h] BYREF

  *(_OWORD *)v20 = 0LL;
  sub_140347770((__int64)v20);
  if ( !(unsigned __int8)sub_140AB46D0() )
  {
    v15 = -1073741431;
    goto LABEL_8;
  }
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 4u, qword_140C490F0, v10, &Object, 0LL);
  v14 = (unsigned __int64)Object;
  v15 = v11;
  if ( v11 != -1073741788 )
  {
    if ( v11 < 0 )
      goto LABEL_5;
    v14 = (unsigned __int64)Object | 1;
    goto LABEL_4;
  }
  v16 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v16, &Object, 0LL);
  v14 = (unsigned __int64)Object;
  v15 = v17;
  if ( v17 >= 0 )
LABEL_4:
    v15 = sub_14067F8D0(a1, a2, a3);
LABEL_5:
  if ( v14 )
    sub_14067F788(v14);
  sub_140AB42A0(v13, v12);
LABEL_8:
  sub_14022EA30(v20);
  return v15;
}
