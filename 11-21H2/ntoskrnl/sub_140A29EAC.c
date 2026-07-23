/*
 * XREFs of sub_140A29EAC @ 0x140A29EAC
 * Callers:
 *     sub_1406CE8B8 @ 0x1406CE8B8 (sub_1406CE8B8.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 */

__int64 __fastcall sub_140A29EAC(__int64 a1, const WCHAR *a2, void *a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // ebx
  unsigned int v10; // r8d
  __int64 **v11; // rcx
  __int64 *v12; // r9
  __int64 **v13; // r10
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  HANDLE v17; // rdx
  __int64 v18; // rcx
  int inited; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( v4 < 2 )
    return (unsigned int)-1073741264;
  v10 = 0;
  v11 = &off_140A380C0;
  do
  {
    v12 = *v11;
    v13 = v11;
    if ( v4 == *((_DWORD *)*v11 + 4) )
    {
      v14 = *(_QWORD *)a4 - *v12;
      if ( *(_QWORD *)a4 == *v12 )
        v14 = *(_QWORD *)(a4 + 8) - v12[1];
      if ( !v14 )
        break;
    }
    v13 = 0LL;
    ++v10;
    v11 += 2;
  }
  while ( v10 < 3 );
  if ( !v13 )
    return (unsigned int)-1073741264;
  if ( a3 || (v5 = sub_140784B14(a1, a2, 0x30u, (__int64)v12, 1, 0, (__int64)&Handle, 0LL), v5 >= 0) )
  {
    v15 = *(_DWORD *)(a4 + 16);
    if ( v15 == 2 )
    {
      v16 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
      if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
        v16 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
      if ( !v16 )
      {
        v17 = Handle;
        if ( a3 )
          v17 = a3;
        if ( a1 )
          v18 = *(_QWORD *)(a1 + 224);
        else
          v18 = 0LL;
        inited = sub_14077FFEC(v18, (__int64)v17, (__int64)L"Device Parameters", 0, 2u, (__int64)&KeyHandle);
        if ( inited != -1073741772 && inited != -1073741444 )
        {
          if ( inited < 0 )
            goto LABEL_24;
          DestinationString = 0LL;
          inited = RtlInitUnicodeStringEx(&DestinationString, L"FriendlyName");
          if ( inited >= 0 )
            inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
          if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
LABEL_24:
            v5 = inited;
        }
        goto LABEL_45;
      }
      goto LABEL_44;
    }
    if ( v15 != 3 )
      goto LABEL_42;
    v20 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
    if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
      v20 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
    if ( v20 )
    {
LABEL_42:
      if ( v15 != 4 )
        goto LABEL_52;
      v21 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
      if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
        v21 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
      if ( v21 )
      {
LABEL_52:
        if ( v15 != 256 )
          goto LABEL_44;
        v22 = *(_QWORD *)a4 - 0x4ACA104A78C34FC8LL;
        if ( *(_QWORD *)a4 == 0x4ACA104A78C34FC8LL )
          v22 = *(_QWORD *)(a4 + 8) - 0x576E99524D52A49ELL;
        if ( v22 )
        {
LABEL_44:
          v5 = -1073741264;
          goto LABEL_45;
        }
      }
    }
    v5 = -1073741790;
  }
LABEL_45:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
