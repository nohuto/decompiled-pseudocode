/*
 * XREFs of sub_1402EEA18 @ 0x1402EEA18
 * Callers:
 *     sub_1406B8B70 @ 0x1406B8B70 (sub_1406B8B70.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 *     sub_1409289DC @ 0x1409289DC (sub_1409289DC.c)
 *     sub_140929C60 @ 0x140929C60 (sub_140929C60.c)
 *     sub_1409AEE00 @ 0x1409AEE00 (sub_1409AEE00.c)
 *     sub_1409AF6F0 @ 0x1409AF6F0 (sub_1409AF6F0.c)
 *     sub_1409B2ED0 @ 0x1409B2ED0 (sub_1409B2ED0.c)
 * Callees:
 *     sub_1402EEAA8 @ 0x1402EEAA8 (sub_1402EEAA8.c)
 *     sub_1409E668C @ 0x1409E668C (sub_1409E668C.c)
 */

__int64 __fastcall sub_1402EEA18(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx

  v6 = sub_1402EEAA8(a1, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  if ( v6 && v6 <= a3 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    v10 = *(_DWORD *)(v9 + 2172);
    if ( (v10 & 0x8000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v9 + 2172), 0x8000u);
      v10 = *(_DWORD *)(v9 + 2172);
    }
    if ( (v10 & 0x100000) != 0 )
      sub_1409E668C(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v8;
  return 0LL;
}
