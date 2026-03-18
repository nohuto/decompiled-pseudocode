/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C001C1E4
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     NVMeInitStreams @ 0x1C00198AC (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  int v4; // r12d
  unsigned __int8 v5; // cl
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 v9; // rsi
  _DWORD *v10; // rax
  unsigned int inited; // r15d
  unsigned int v12; // eax
  __int16 v13; // ax
  int v14; // ebx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx

  v4 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v5 = *(_BYTE *)(a2 + 7);
  v6 = v5;
  GetNamespaceId(a1, v5);
  v8 = *(_QWORD *)(a1 + 8 * v6 + 1752);
  if ( (unsigned int)v6 >= 0xFF || !v8 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    inited = -1056964602;
    v9 = v7;
    if ( (unsigned int)v6 >= 0xFF )
      goto LABEL_32;
    goto LABEL_30;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v9 = *(_QWORD *)(a2 + 64);
    v10 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 24);
    v10 = (_DWORD *)(a2 + 16);
  }
  if ( *v10 >= 0x4Cu )
  {
    if ( *(_DWORD *)(v9 + 28) == 1 )
    {
      if ( (*(_BYTE *)(a1 + 3808) & 7) == 3
        && *(_BYTE *)(a1 + 3809) == (_BYTE)v6
        && *(_WORD *)(a1 + 3812) > (unsigned __int16)v7 )
      {
        v12 = NVMeDirectiveStreamsReturnParameters(a1);
        LOBYTE(v7) = 0;
        inited = v12;
        if ( v12 )
        {
          inited = 0;
          *(_WORD *)(a1 + 3814) = -1;
          v13 = -1;
        }
        else
        {
          v13 = 0;
          *(_WORD *)(a1 + 3814) = 0;
        }
        *(_WORD *)(a1 + 3816) = v13;
      }
      else
      {
        inited = NVMeInitStreams(a1, v6);
        LOBYTE(v7) = 0;
      }
      v14 = *(_DWORD *)(v8 + 52);
      if ( inited )
      {
        *(_BYTE *)(a2 + 3) = 4;
      }
      else
      {
        v4 = 48;
        *(_OWORD *)(v9 + 28) = 0LL;
        *(_OWORD *)(v9 + 44) = 0LL;
        *(_OWORD *)(v9 + 60) = 0LL;
        *(_DWORD *)(v9 + 28) = 1;
        *(_DWORD *)(v9 + 32) = 48;
        *(_DWORD *)(v9 + 36) = v14;
        v15 = v14 * *(_DWORD *)(a1 + 3820);
        *(_DWORD *)(v9 + 40) = v15;
        *(_DWORD *)(v9 + 44) = v15 * *(_DWORD *)(a1 + 3824);
        v16 = *(unsigned __int16 *)(a1 + 3812);
        *(_DWORD *)(v9 + 72) = v16;
        *(_DWORD *)(v9 + 52) = v16;
        *(_DWORD *)(v9 + 48) = 1;
        *(_DWORD *)(v9 + 56) = v15;
        *(_DWORD *)(v9 + 60) = *(unsigned __int16 *)(a1 + 3812);
        v17 = -1;
        v18 = *(unsigned __int16 *)(a1 + 3814);
        if ( (_WORD)v18 == 0xFFFF )
          v18 = -1;
        *(_DWORD *)(v9 + 68) = v18;
        if ( *(_WORD *)(a1 + 3816) != 0xFFFF )
          v17 = *(unsigned __int16 *)(a1 + 3816);
        *(_DWORD *)(v9 + 64) = v17;
        *(_BYTE *)(a2 + 3) = 1;
      }
      goto LABEL_30;
    }
    goto LABEL_11;
  }
  if ( *v10 < 0x24u )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 6;
    inited = -1056964602;
    goto LABEL_30;
  }
  *(_DWORD *)(v9 + 28) = 1;
  *(_DWORD *)(v9 + 32) = 48;
  inited = -1056964604;
  v4 = 8;
  *(_BYTE *)(a2 + 3) = 18;
LABEL_30:
  if ( *(_BYTE *)(a1 + 24) != (_BYTE)v7 )
    StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8 * v6 + 1752), 0LL);
LABEL_32:
  *(_DWORD *)(v9 + 24) = v4;
  return inited;
}
