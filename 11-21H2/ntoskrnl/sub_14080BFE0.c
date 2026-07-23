/*
 * XREFs of sub_14080BFE0 @ 0x14080BFE0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14067A8B0 @ 0x14067A8B0 (sub_14067A8B0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 sub_14080BFE0()
{
  int v0; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  void *v5; // [rsp+70h] [rbp+30h] BYREF

  Data = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v5 = 0LL;
  KeyHandle = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
  {
    if ( !SeSinglePrivilegeCheck(stru_140D3CA10, 1) || PsIsCurrentThreadInServerSilo() )
    {
      return (unsigned int)-1073741727;
    }
    else
    {
      v0 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v5);
      if ( v0 >= 0 )
      {
        ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
        *(_DWORD *)&ValueName.Length = 1572886;
        v0 = sub_14067A8B0(&KeyHandle, v5, &ValueName, 0xF003Fu, 0, 0LL);
        if ( v0 >= 0 )
        {
          ValueName.Buffer = L"DisableLKG";
          Data = 1;
          *(_DWORD *)&ValueName.Length = 1441812;
          v0 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        }
        if ( KeyHandle )
          ZwClose(KeyHandle);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v0;
}
