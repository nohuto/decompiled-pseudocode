/*
 * XREFs of LdrpSignalModuleMapped @ 0x18002C214
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 * Callees:
 *     LdrpQueueWork @ 0x180073560 (LdrpQueueWork.c)
 */

__int64 __fastcall LdrpSignalModuleMapped(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 152);
  v2 = *(_QWORD **)(result + 48);
  if ( v2 )
  {
    v3 = *(_QWORD **)(result + 48);
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = (_DWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF8uLL);
      result = *(_QWORD *)v4;
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( v5 )
      {
        result = (unsigned int)(*(_DWORD *)(v5 + 108) - 1);
        *(_DWORD *)(v5 + 108) = result;
        if ( v4[14] != 5 && !(_DWORD)result )
        {
          v4[14] = 4;
          result = LdrpQueueWork(v5);
        }
      }
    }
    while ( v3 != v2 );
  }
  return result;
}
