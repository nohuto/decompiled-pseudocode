/*
 * XREFs of IommuPasidDeviceCreate @ 0x140935960
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x14040FB48 (Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage.c)
 *     IommupPasidDeviceCreate @ 0x14050EC38 (IommupPasidDeviceCreate.c)
 *     ExFreeAsid @ 0x14060D5C8 (ExFreeAsid.c)
 *     ExpAllocateAsid @ 0x14060D980 (ExpAllocateAsid.c)
 */

__int64 __fastcall IommuPasidDeviceCreate(__int64 a1, __int64 *a2, int *a3)
{
  __int64 v6; // rcx
  unsigned int Asid; // eax
  int v9; // edi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  *a3 = -1;
  v12 = 0LL;
  *a2 = 0LL;
  if ( !(unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() )
    return 3221225659LL;
  if ( *(_BYTE *)(a1 + 265) && (*(_DWORD *)(a1 + 384) & 4) != 0 )
  {
    Asid = ExpAllocateAsid(v6, 0LL);
    v9 = Asid;
    if ( Asid - 1 > 0xFFFFFFFD )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v10 = IommupPasidDeviceCreate(a1, Asid, &v12);
      if ( v10 < 0 )
      {
        ExFreeAsid(v9);
      }
      else
      {
        v11 = v12;
        *a3 = v9;
        *a2 = v11;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v10;
}
