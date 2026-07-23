/*
 * XREFs of sub_140846760 @ 0x140846760
 * Callers:
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

__int64 __fastcall sub_140846760(
        __int64 a1,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  void *v10; // rax
  void *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // edi

  sub_14077572C(0);
  v10 = sub_14036B86C(a1, 0x49706E50u);
  v11 = v10;
  if ( v10 )
    v12 = *(_QWORD *)(*((_QWORD *)v10 + 39) + 40LL);
  else
    v12 = 0LL;
  if ( (PVOID)v12 == qword_140C46278 )
  {
LABEL_8:
    v13 = -1073741637;
  }
  else
  {
    while ( v12 && *(_DWORD *)(v12 + 300) != 790 )
    {
      v13 = sub_14074C6C0(*(PDEVICE_OBJECT *)(v12 + 32), a2, a4, a3, a5, a6);
      if ( v13 != -1073741637 )
        goto LABEL_9;
      v12 = *(_QWORD *)(v12 + 16);
      if ( (PVOID)v12 == qword_140C46278 )
        goto LABEL_8;
    }
    v13 = -1073741130;
  }
LABEL_9:
  ObfDereferenceObjectWithTag(v11, 0x49706E50u);
  sub_140775698(0);
  return v13;
}
