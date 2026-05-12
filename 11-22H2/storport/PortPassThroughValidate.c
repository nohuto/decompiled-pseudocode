/*
 * XREFs of PortPassThroughValidate @ 0x1C00A2050
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C00A1E80 (PortPassThroughSendAsync.c)
 * Callees:
 *     PortPassThroughNormalize @ 0x1C001E388 (PortPassThroughNormalize.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C001E440 (PortpPassThroughZeroUnusedBuffers.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     PortPassThroughGetDataBuffer @ 0x1C00A2158 (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C00A2218 (PortPassThroughValidateNormalizedRequest.c)
 */

__int64 __fastcall PortPassThroughValidate(__int64 a1, IRP *a2, char a3, unsigned int a4, unsigned int a5, _OWORD *a6)
{
  _OWORD *v6; // rdi
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r8
  int DataBuffer; // eax
  __int64 v15; // rdx
  _OWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v6 = v17;
  v17[0] = 0LL;
  if ( a6 )
    v6 = a6;
  memset(&v17[1], 0, 32);
  v18 = 0LL;
  v11 = PortPassThroughNormalize((__int64)v6, a2);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a3;
    v11 = PortPassThroughValidateNormalizedRequest(v6, a2, v12);
    if ( v11 >= 0 )
    {
      PortpPassThroughZeroUnusedBuffers((__int64)a2);
      LOBYTE(v13) = a3;
      DataBuffer = PortPassThroughGetDataBuffer(v6, a2, v13);
      if ( (*(_DWORD *)(a1 + 152) & DataBuffer) != 0 )
        return (unsigned int)-1073741811;
      v15 = *((unsigned int *)v6 + 3);
      if ( (_DWORD)v15 )
      {
        if ( (unsigned int)(((unsigned __int64)(DataBuffer & 0xFFF) + v15 + 4095) >> 12) > a4 || (unsigned int)v15 > a5 )
          return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v11;
}
