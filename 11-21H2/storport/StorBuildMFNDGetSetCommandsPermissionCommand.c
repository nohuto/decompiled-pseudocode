/*
 * XREFs of StorBuildMFNDGetSetCommandsPermissionCommand @ 0x1C00670FC
 * Callers:
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C0090E08 (StorQueryMFNDChildPFCommandPermission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorBuildMFNDGetSetCommandsPermissionCommand(__int64 a1, char a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r8d

  result = (unsigned int)MFNDCommandSpecificationVersion;
  v4 = a3 >> 2;
  if ( a2 )
  {
    *(_BYTE *)a1 = -46;
    if ( (_DWORD)result == 144 )
    {
      *(_DWORD *)(a1 + 44) = v4;
      *(_BYTE *)(a1 + 40) = 6;
      return result;
    }
    *(_BYTE *)(a1 + 60) = 6;
  }
  else
  {
    *(_BYTE *)a1 = -47;
    if ( (_DWORD)result == 144 )
    {
      *(_DWORD *)(a1 + 44) = v4;
      *(_BYTE *)(a1 + 40) = 7;
      return result;
    }
    *(_BYTE *)(a1 + 60) = 7;
  }
  *(_DWORD *)(a1 + 40) = v4;
  return result;
}
