/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry @ 0x180001140
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     LdrpReadMemory @ 0x180001260 (LdrpReadMemory.c)
 */

NTSTATUS __fastcall LdrQueryModuleInfoFromLdrEntry(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  NTSTATUS result; // eax
  int v10; // esi
  __int64 v11; // rdx
  _BYTE v12[24]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-190h]
  _BYTE v14[48]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-128h]
  int v16; // [rsp+B0h] [rbp-118h]
  _BYTE v17[32]; // [rsp+B8h] [rbp-110h] BYREF
  int v18; // [rsp+D8h] [rbp-F0h]
  __int64 v19; // [rsp+108h] [rbp-C0h]
  __int64 v20; // [rsp+1E0h] [rbp+18h] BYREF

  result = LdrpReadMemory(a1, a3, v14, 312LL);
  if ( result >= 0 )
  {
    result = LdrpReadMemory(a1, v19, v12, 80LL);
    if ( result >= 0 )
    {
      *(_QWORD *)(a2 + 16) = v15;
      *(_DWORD *)(a2 + 24) = v16;
      *(_DWORD *)(a2 + 28) = v18;
      if ( v13 > 0xFFFF )
        *(_WORD *)(a2 + 36) = -1;
      else
        *(_WORD *)(a2 + 36) = v13;
      if ( (a5 & 2) != 0 )
      {
        v10 = 10240;
        v11 = a4;
        do
        {
          if ( (int)LdrpReadMemory(a1, v11, &v20, 8LL) < 0 )
            break;
          v11 = v20;
          if ( v20 == a4 )
            break;
          ++*(_WORD *)(a2 + 34);
          if ( a3 == v11 - 32 )
            break;
          --v10;
        }
        while ( v10 );
      }
      return LdrpGetModuleName(a1, (__int64)v17, a2, 0);
    }
  }
  return result;
}
