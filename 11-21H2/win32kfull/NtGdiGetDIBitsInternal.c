/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C0026E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C0027318 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0027480 (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C0029854 (GreGetBitmapBitsSize.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r13
  unsigned int biSize; // ebx
  __int64 v10; // rsi
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v12; // r14
  unsigned int v13; // r8d
  unsigned int biHeight; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  bool v17; // zf
  int v18; // eax
  unsigned int biWidth_high; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int DIBitsInternal; // ebx
  unsigned int Length; // [rsp+58h] [rbp-D0h]
  unsigned int v26; // [rsp+60h] [rbp-C8h]
  int v28; // [rsp+70h] [rbp-B8h]
  HANDLE SecureHandle; // [rsp+80h] [rbp-A8h]
  int v30; // [rsp+88h] [rbp-A0h]
  _DWORD v32[8]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-50h]

  v30 = a2;
  v26 = a4;
  Length = a8;
  v28 = 1;
  SecureHandle = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  biSize = Address->bmiHeader.biSize;
  ProbeForWrite(Address, Address->bmiHeader.biSize, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( biSize == 12 && !HIWORD(Address->bmiHeader.biHeight) )
      goto LABEL_40;
    LODWORD(v10) = 0;
    if ( biSize >= 0x28 && !Address->bmiHeader.biBitCount )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_40:
    memmove(v32, Address, (unsigned int)v10);
    v32[0] = v10;
LABEL_41:
    v12 = (struct tagBITMAPINFO *)v32;
    goto LABEL_32;
  }
  if ( biSize == 40 )
    Address->bmiHeader.biClrUsed = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, biSize);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_41;
  v12 = (struct tagBITMAPINFO *)Win32AllocPoolZInit(BitmapSizeInternal, 1886221383LL);
  if ( v12 )
  {
    if ( (struct tagBITMAPINFO *)((char *)Address + v10) < Address
      || (unsigned __int64)Address + v10 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v12, Address, (unsigned int)v10);
    v12->bmiHeader.biSize = biSize;
    if ( GreGetBitmapSizeInternal(v12, a7, biSize) != (_DWORD)v10 )
    {
LABEL_55:
      LODWORD(v10) = 0;
      goto LABEL_58;
    }
    if ( biSize >= 0x28 )
      v12->bmiHeader.biClrUsed = 0;
    v13 = v26;
    if ( v26 )
    {
      if ( biSize < 0x28 )
      {
        biWidth_high = HIWORD(v12->bmiHeader.biWidth);
        v20 = a3;
        if ( biWidth_high < a3 )
          v20 = HIWORD(v12->bmiHeader.biWidth);
        a3 = v20;
        v21 = biWidth_high - v20;
        v22 = v26;
        if ( v21 < v26 )
          v22 = v21;
        v26 = v22;
        if ( !LOWORD(v12->bmiHeader.biWidth) || !LOWORD(v12->bmiHeader.biHeight) )
          goto LABEL_46;
        v17 = HIWORD(v12->bmiHeader.biHeight) == 0;
      }
      else
      {
        biHeight = -v12->bmiHeader.biHeight;
        if ( v12->bmiHeader.biHeight >= 0 )
          biHeight = v12->bmiHeader.biHeight;
        v15 = a3;
        if ( biHeight < a3 )
          v15 = biHeight;
        a3 = v15;
        v16 = biHeight - v15;
        if ( v16 < v26 )
          v13 = v16;
        v26 = v13;
        if ( !v12->bmiHeader.biWidth || !v12->bmiHeader.biPlanes )
          goto LABEL_46;
        v17 = v12->bmiHeader.biBitCount == 0;
      }
      v18 = 0;
      if ( !v17 )
      {
LABEL_31:
        v28 = v18;
        goto LABEL_32;
      }
LABEL_46:
      v18 = 1;
      goto LABEL_31;
    }
  }
LABEL_32:
  if ( (_DWORD)v10 && v8 && v12 )
  {
    if ( v12->bmiHeader.biSize < 0x28 || v12->bmiHeader.biCompression - 1 > 1 || v12->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize(v12)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        SecureHandle = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_58;
    }
    goto LABEL_55;
  }
LABEL_58:
  if ( v8 && v28 || !(_DWORD)v10 || !v12 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, v30, a3, v26, (__int64)v8, v12, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v12, (unsigned int)v10);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v12 )
  {
    if ( v12 != (struct tagBITMAPINFO *)v32 )
      Win32FreePool(v12);
  }
  return DIBitsInternal;
}
