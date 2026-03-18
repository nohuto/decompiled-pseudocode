/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x140961910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140773AF0 (RtlUpcaseUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  void *Pool2; // rax
  void *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-20h] BYREF

  Uuid = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = ExUuidCreate(&Uuid);
  if ( v4 >= 0 )
  {
    v4 = RtlStringFromGUIDEx(&Uuid.Data1, (__int64)&DestinationString, 1);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( v4 >= 0 )
      {
        v5 = DestinationString.Length + 2;
        Pool2 = (void *)ExAllocatePool2(256LL, v5, 1667526736LL);
        v7 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, DestinationString.Buffer, v5);
          *(_DWORD *)(a3 + 32) = 1;
          *(_DWORD *)(a3 + 36) = v5;
          *(_QWORD *)(a3 + 40) = v7;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v4;
}
