/*
 * XREFs of sub_140A6C7A8 @ 0x140A6C7A8
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406390F8 @ 0x1406390F8 (sub_1406390F8.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 */

void sub_140A6C7A8()
{
  int v0; // edx
  BOOLEAN v1; // cl
  _QWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx

  v2 = sub_140204738(0LL);
  if ( v0 )
  {
    if ( v0 == 1 && (dword_140C23508 & 2) != 0 )
      sub_1407FFFE4(v1);
  }
  else
  {
    sub_1406390F8();
    v3 = (void *)v2[111];
    byte_140D01198 = 1;
    byte_140D3CA37 = 1;
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      v2[111] = 0LL;
    }
    v4 = (void *)v2[110];
    if ( v4 )
    {
      ObfDereferenceObjectWithTag(v4, 0x65487845u);
      v2[110] = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15958, 0LL);
    if ( qword_140C15960 )
    {
      ObfDereferenceObject(qword_140C15960);
      qword_140C15960 = 0LL;
    }
    if ( qword_140C15968 )
    {
      ObfDereferenceObject(qword_140C15968);
      qword_140C15968 = 0LL;
    }
    if ( qword_140C15948 )
    {
      ObCloseHandle(qword_140C15948, 0);
      qword_140C15948 = 0LL;
    }
    if ( qword_140C0DD08 )
    {
      ObCloseHandle(qword_140C0DD08, 0);
      qword_140C0DD08 = 0LL;
    }
    ExReleasePushLockEx((ULONG_PTR)&qword_140C15958, 0LL);
  }
}
