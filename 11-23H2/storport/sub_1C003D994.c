/*
 * XREFs of sub_1C003D994 @ 0x1C003D994
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C003D994(__int64 a1)
{
  void *Data; // rbx
  unsigned int v2; // edi
  __int64 ActiveGroupCount; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned __int16 i; // r8
  unsigned int j; // r9d
  __int64 v9; // rdx
  ULONG Type; // [rsp+40h] [rbp-48h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-44h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+48h] [rbp-40h] BYREF

  Data = (void *)(a1 + 4592);
  v2 = 0;
  PropertyKey.pid = 1;
  PropertyKey.fmtid = (DEVPROPGUID)xmmword_1C00891B8;
  Type = 0;
  *(_DWORD *)(a1 + 4592) = 0;
  ActiveGroupCount = KeQueryActiveGroupCount();
  RequiredSize = 4;
  IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, 4u, Data, &RequiredSize, &Type);
  if ( *(_BYTE *)(a1 + 4305) == 1 )
  {
    v5 = (__int64 *)(a1 + 4616);
    if ( *(char *)(a1 + 110) < 0 && *v5
      || (v6 = sub_1C0007CF4(64LL, ActiveGroupCount << 6, 1917083986LL, *(_QWORD *)(a1 + 8)), (*v5 = v6) != 0) )
    {
      for ( i = 0; i < (unsigned __int16)ActiveGroupCount; ++i )
      {
        for ( j = 0; j < 0x40; ++j )
        {
          v9 = (i << 6) + j;
          *(_BYTE *)(v9 + *v5) = -1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
