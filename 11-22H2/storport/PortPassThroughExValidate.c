/*
 * XREFs of PortPassThroughExValidate @ 0x1C00789BC
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00A1DE0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C001E440 (PortpPassThroughZeroUnusedBuffers.c)
 *     PortPassThroughExNormalize @ 0x1C007890C (PortPassThroughExNormalize.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C00B0828 (PortPassThroughExGetDataBuffers.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C00B0874 (PortPassThroughExValidateNormalizedRequest.c)
 */

__int64 __fastcall PortPassThroughExValidate(
        __int64 a1,
        IRP *a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v10; // ebx
  __int64 v11; // r8
  int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v10 = PortPassThroughExNormalize(a6, a2);
  if ( v10 >= 0 )
  {
    LOBYTE(v11) = a3;
    v10 = PortPassThroughExValidateNormalizedRequest(a6, a2, v11);
    if ( v10 >= 0 )
    {
      v17 = 0LL;
      v18[0] = 0LL;
      PortpPassThroughZeroUnusedBuffers((__int64)a2);
      LOBYTE(v12) = a3;
      PortPassThroughExGetDataBuffers((_DWORD)a6, (_DWORD)a2, v12, (unsigned int)&v17, (__int64)v18);
      v13 = *(unsigned int *)(a1 + 152);
      if ( (v13 & v17) != 0
        || (v14 = a6[8], (_DWORD)v14)
        && ((unsigned int)((v14 + (unsigned __int64)(v17 & 0xFFF) + 4095) >> 12) > a4 || (unsigned int)v14 > a5) )
      {
        v10 = -1073741811;
      }
      if ( (v13 & v18[0]) != 0 )
        return (unsigned int)-1073741811;
      v15 = a6[9];
      if ( (_DWORD)v15 )
      {
        if ( (unsigned int)((v15 + (unsigned __int64)(v18[0] & 0xFFF) + 4095) >> 12) > a4 || (unsigned int)v15 > a5 )
          return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v10;
}
