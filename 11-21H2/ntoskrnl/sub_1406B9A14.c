/*
 * XREFs of sub_1406B9A14 @ 0x1406B9A14
 * Callers:
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140937CC0 @ 0x140937CC0 (sub_140937CC0.c)
 * Callees:
 *     sub_14024013C @ 0x14024013C (sub_14024013C.c)
 *     sub_1402A4DEC @ 0x1402A4DEC (sub_1402A4DEC.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14069B6E0 (IoGetIrpExtraCreateParameter.c)
 *     sub_1406B9B78 @ 0x1406B9B78 (sub_1406B9B78.c)
 *     sub_1406B9DC4 @ 0x1406B9DC4 (sub_1406B9DC4.c)
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406B9A14(
        PIRP Irp,
        UNICODE_STRING *EcpContext,
        unsigned __int16 a3,
        const UNICODE_STRING *a4,
        __int16 a5,
        __int16 a6)
{
  UNICODE_STRING *v6; // rbx
  __int64 Length; // rcx
  __int16 v11; // r12
  __int16 v12; // ax
  UNICODE_STRING *v14; // rdi
  UNICODE_STRING *i; // rax
  __int64 Pool2; // rax
  UNICODE_STRING *v17; // rsi
  int v18; // ebx
  UNICODE_STRING *v19; // [rsp+50h] [rbp-10h] BYREF
  PVOID v20; // [rsp+58h] [rbp-8h] BYREF
  PVOID EcpContexta; // [rsp+A8h] [rbp+48h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+B8h] [rbp+58h] BYREF

  EcpContexta = EcpContext;
  v6 = EcpContext;
  v19 = 0LL;
  ExtraCreateParameter = 0LL;
  IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
  sub_14024013C(ExtraCreateParameter, (PVOID *)&v19);
  Length = a4->Length;
  v11 = a6;
  if ( v6[1].MaximumLength < (unsigned __int16)Length )
  {
    v14 = v19;
    v20 = 0LL;
    if ( v19 == v6 )
    {
      sub_1402A4DEC(ExtraCreateParameter, &EcpContexta);
      v18 = sub_1406B9EA8(Irp, &v20);
      if ( v18 < 0 )
      {
        FsRtlFreeExtraCreateParameter(EcpContexta);
        return (unsigned int)v18;
      }
      v6 = (UNICODE_STRING *)EcpContexta;
      v17 = (UNICODE_STRING *)v20;
    }
    else
    {
      for ( i = (UNICODE_STRING *)v19->Buffer; i != v6; i = (UNICODE_STRING *)i->Buffer )
        v14 = i;
      Pool2 = ExAllocatePool2(256LL, Length + 32, 1767075657LL);
      v17 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v14->Buffer = (wchar_t *)Pool2;
    }
    sub_1406B9DC4(v17, (unsigned int)a4->Length + 32, a4->Buffer, a4->Length, a3, 0LL, 0, 0, v11, v6->Buffer);
    if ( v6 == v14 )
    {
      v6->Buffer = 0LL;
      FsRtlFreeExtraCreateParameter(v6);
    }
    else
    {
      ExFreePoolWithTag(v6, 0x69536F49u);
    }
    v6 = v17;
  }
  else
  {
    RtlCopyUnicodeString(v6 + 1, a4);
  }
  v12 = a5;
  v6->MaximumLength = v11;
  *(&v6->MaximumLength + 1) = v12;
  v6->Length = a3;
  if ( (v6->MaximumLength & 1) == 0 )
    sub_1406B9B78(v6);
  return 0LL;
}
