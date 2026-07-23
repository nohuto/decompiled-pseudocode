/*
 * XREFs of sub_1407842F0 @ 0x1407842F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140252C54 @ 0x140252C54 (sub_140252C54.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1406D8750 @ 0x1406D8750 (sub_1406D8750.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG __fastcall sub_1407842F0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  LONG result; // eax
  void *v6; // rcx
  void *v7; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 160) )
      sub_1406D8750(v2, *(_DWORD *)(a1 + 64));
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v3 + 8) != a1 + 40 || (v4 = *(_QWORD **)(a1 + 48), *v4 != a1 + 40) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    KeReleaseMutex(&Object, 0);
    sub_1407838E0((__int64 *)&off_140C037C0, *(_QWORD *)(a1 + 56));
  }
  result = *(_DWORD *)(a1 + 164);
  if ( (result & 2) == 0 )
  {
    v6 = *(void **)(a1 + 96);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    v7 = *(void **)(a1 + 128);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    sub_140252C54(a1);
    return KeReleaseMutex(&Object, 0);
  }
  return result;
}
