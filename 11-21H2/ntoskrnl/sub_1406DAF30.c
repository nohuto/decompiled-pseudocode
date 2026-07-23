/*
 * XREFs of sub_1406DAF30 @ 0x1406DAF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140253DB4 @ 0x140253DB4 (sub_140253DB4.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14075EE80 @ 0x14075EE80 (sub_14075EE80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1406DAF30()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // ecx
  __int64 result; // rax

  do
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v0 = off_140C04388;
    v1 = *((_QWORD *)off_140C04388 + 3);
    if ( v1 && *(PDEVICE_OBJECT *)(v1 + 16) != qword_140C164D8 )
    {
      KeReleaseMutex(&Object, 0);
      sub_140253DB4(1);
      sub_140253DB4(0);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
    if ( *((PVOID **)off_140C04388 + 1) != &off_140C04388
      || (v2 = *(_QWORD *)off_140C04388, *(PVOID *)(*(_QWORD *)off_140C04388 + 8LL) != off_140C04388) )
    {
      __fastfail(3u);
    }
    off_140C04388 = *(PVOID *)off_140C04388;
    *(_QWORD *)(v2 + 8) = &off_140C04388;
    KeReleaseMutex(&Object, 0);
    v4 = v0[3];
    if ( v4 )
    {
      v5 = *((_DWORD *)v0 + 4);
      if ( v5 )
      {
        if ( v5 != 1 )
          goto LABEL_10;
        LOBYTE(v3) = 1;
      }
      else
      {
        v3 = 0LL;
      }
      sub_14075EE80(v0[3], v3);
LABEL_10:
      sub_1402E0164(v4);
    }
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&dword_140C0BB00, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
