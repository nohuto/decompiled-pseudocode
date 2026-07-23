/*
 * XREFs of sub_14080E2B0 @ 0x14080E2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_14080E3CC @ 0x14080E3CC (sub_14080E3CC.c)
 *     sub_1409DE4C4 @ 0x1409DE4C4 (sub_1409DE4C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14080E2B0(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // r14
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rsi
  ULONG_PTR v7; // rdx
  void *v8; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 1) == 0 )
    KeBugCheckEx(0x14Au, 1uLL, BugCheckParameter2, 0LL, 0LL);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v2 = *(_QWORD **)(BugCheckParameter2 + 40);
  while ( v2 != (_QWORD *)(BugCheckParameter2 + 40) )
  {
    v3 = (ULONG_PTR)(v2 - 5);
    if ( *(v2 - 5) )
    {
      sub_14080E3CC(v2 - 5);
      *(_QWORD *)(v3 + 64) = 0LL;
    }
    v4 = *(_QWORD *)(v3 + 56);
    if ( v4 && (*(_DWORD *)(v3 + 16) & 8) == 0 )
    {
      v5 = *(_QWORD *)(v4 + 72) - 0x11D1D56605901221LL;
      if ( *(_QWORD *)(v4 + 72) == 0x11D1D56605901221LL )
        v5 = *(_QWORD *)(v4 + 80) - 0x102906C9A000F0B2LL;
      if ( !v5 )
      {
        KeReleaseMutex(&Object, 0);
        sub_1409DE4C4(v2 - 5, qword_140A37FB0);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v4 = *(_QWORD *)(v3 + 56);
      }
      sub_1407838E0((__int64 *)&off_140C037C0, v4);
    }
    *(_QWORD *)(v3 + 56) = 0LL;
    v2 = (_QWORD *)*v2;
    sub_1407838E0((__int64 *)&off_140C037A0, v3);
  }
  KeReleaseMutex(&Object, 0);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(BugCheckParameter2 + 64); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 72) + 8 * i);
    if ( v7 )
      sub_1407838E0((__int64 *)&off_140C03800, v7);
  }
  v8 = *(void **)(BugCheckParameter2 + 72);
  if ( v8 != (void *)(BugCheckParameter2 + 80) )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  }
}
