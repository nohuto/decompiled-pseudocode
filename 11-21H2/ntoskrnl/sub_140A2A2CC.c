/*
 * XREFs of sub_140A2A2CC @ 0x140A2A2CC
 * Callers:
 *     sub_1407894A8 @ 0x1407894A8 (sub_1407894A8.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_140A2A2CC(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  HANDLE v4; // rdi
  __int64 **v5; // r10
  int v6; // ebx
  unsigned int i; // r11d
  __int64 *v11; // rdx
  __int64 **v12; // rsi
  __int64 v13; // rcx
  const WCHAR *v14; // rdx
  NTSTATUS inited; // eax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = &off_140A38610;
  v6 = 0;
  Handle = 0LL;
  for ( i = 0; i < 2; ++i )
  {
    v11 = *v5;
    v12 = v5;
    if ( *(_DWORD *)(a4 + 16) == *((_DWORD *)*v5 + 4) )
    {
      v13 = *(_QWORD *)a4 - *v11;
      if ( *(_QWORD *)a4 == *v11 )
        v13 = *(_QWORD *)(a4 + 8) - v11[1];
      if ( !v13 )
        break;
    }
    v12 = 0LL;
    v5 += 4;
  }
  if ( !v12 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_12;
  v6 = sub_14077F2EC(a1, a2, 16, 0, 2, 0, (__int64)&Handle, 0LL);
  if ( v6 >= 0 )
  {
    v4 = Handle;
LABEL_12:
    v14 = (const WCHAR *)v12[2];
    DestinationString = 0LL;
    if ( a3 )
      v4 = a3;
    inited = RtlInitUnicodeStringEx(&DestinationString, v14);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(v4, &DestinationString);
    if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
      v6 = inited;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
