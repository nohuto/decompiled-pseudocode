/*
 * XREFs of sub_140396464 @ 0x140396464
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14039653C @ 0x14039653C (sub_14039653C.c)
 */

int sub_140396464()
{
  __int64 v0; // rbx
  int v1; // edi
  _QWORD *v2; // rax
  bool v3; // sf
  __int64 v4; // rbx
  _BYTE Object[4]; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+34h] [rbp-1Ch]
  _QWORD v8[2]; // [rsp+38h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp-8h]
  int v10; // [rsp+4Ch] [rbp-4h]

  v10 = 0;
  Object[1] = 0;
  Object[3] = 0;
  ExAcquireFastMutex(&stru_140C1FB00);
  byte_140C1FB3C = 0;
  v0 = (unsigned int)(15 - dword_140C1FB40 - dword_140C1FAC4);
  dword_140C1FB40 += v0;
  KeReleaseGuardedMutex(&stru_140C1FB00);
  v7 = 0;
  v8[1] = v8;
  v1 = 0;
  Object[0] = 5;
  v2 = v8;
  v8[0] = v8;
  Object[2] = 8;
  v9 = v0;
  if ( (_DWORD)v0 )
  {
    do
    {
      v3 = (int)sub_14039653C(Object) < 0;
      LODWORD(v2) = v1 + 1;
      if ( v3 )
        LODWORD(v2) = v1;
      v1 = (int)v2;
      --v0;
    }
    while ( v0 );
    if ( (_DWORD)v2 )
    {
      v4 = (unsigned int)v2;
      do
      {
        LODWORD(v2) = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
        --v4;
      }
      while ( v4 );
    }
  }
  return (int)v2;
}
