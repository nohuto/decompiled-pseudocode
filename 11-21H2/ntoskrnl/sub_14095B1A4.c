/*
 * XREFs of sub_14095B1A4 @ 0x14095B1A4
 * Callers:
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14095813C @ 0x14095813C (sub_14095813C.c)
 *     sub_140958764 @ 0x140958764 (sub_140958764.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095B1A4(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rcx
  __int64 result; // rax
  _QWORD *v3; // r14
  __int64 v4; // rdx
  int v5; // ebx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF

  Src = 0LL;
  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  P = 0LL;
  result = sub_140958764(v1, (USHORT **)&P);
  if ( (int)result >= 0 )
  {
    v3 = P;
    v5 = sub_14042A5E0(*((_QWORD *)P + 1), &Src);
    if ( v5 >= 0 )
      v5 = 0;
    sub_14042A5E0(v3[1], v4);
    ExFreePoolWithTag(v3, 0);
    return (unsigned int)v5;
  }
  return result;
}
