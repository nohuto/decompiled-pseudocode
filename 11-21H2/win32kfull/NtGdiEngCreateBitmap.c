/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C014DC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C014DE4C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, unsigned int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  __int64 v9; // rdx
  unsigned int v10; // rcx^4
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  FLONG v13; // esi
  struct _EPROCESS *CurrentProcess; // rax
  char *v16; // rcx
  struct _EPROCESS *v17; // rax
  BOOL v18; // [rsp+30h] [rbp-78h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-70h]
  _BYTE v20[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v21; // [rsp+68h] [rbp-40h]

  Bitmap = 0LL;
  SecureHandle = 0LL;
  v18 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl, 1) )
    return 0LL;
  v12 = v11 * v10;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1133);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v13 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v12 )
    {
      v16 = &Address[(unsigned int)v12];
      if ( (unsigned __int64)v16 > MmUserProbeAddress || v16 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v12, 4u);
    v18 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v17 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9),
            !(unsigned int)bIsProcessLocalSystem(v17)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed su"
              "rface without input buffer\n",
              1169);
          v18 = 0;
        }
      }
    }
    v13 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v13 |= 0x80u;
  }
  if ( v18 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000, v13, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      SURFREF::SURFREF((SURFREF *)v20, (HSURF)Bitmap);
      if ( v21 )
      {
        *(_QWORD *)(v21 + 144) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      SURFREF::~SURFREF((SURFREF *)v20);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
