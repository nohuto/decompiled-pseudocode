/*
 * XREFs of ParseFieldConnection @ 0x1C006BCC4
 * Callers:
 *     ParseField @ 0x1C0015980 (ParseField.c)
 * Callees:
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     ParseName @ 0x1C000BE54 (ParseName.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     ParsePackageLen @ 0x1C006C04C (ParsePackageLen.c)
 */

__int64 __fastcall ParseFieldConnection(__int64 a1, _SLIST_ENTRY **a2)
{
  _WORD **v2; // rsi
  _BYTE *v3; // rax
  _WORD *v6; // r13
  bool v7; // zf
  int v8; // eax
  unsigned __int64 v9; // rdi
  _WORD *v10; // r15
  const void *v11; // rbx
  int v12; // r12d
  int v13; // eax
  char *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  _SLIST_ENTRY *v17; // rcx
  const void *v18; // rdx
  int v19; // ecx
  _SLIST_ENTRY *v20; // rax
  _SLIST_ENTRY *v21; // rcx
  unsigned int v22; // eax
  unsigned __int64 v24; // [rsp+30h] [rbp-178h] BYREF
  __int128 v25; // [rsp+38h] [rbp-170h] BYREF
  __int128 v26; // [rsp+48h] [rbp-160h]
  __int64 v27; // [rsp+58h] [rbp-150h]
  char Src[256]; // [rsp+60h] [rbp-148h] BYREF

  v2 = (_WORD **)(a1 + 120);
  v27 = 0LL;
  v3 = *(_BYTE **)(a1 + 120);
  v24 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v7 = *v3 == 17;
  v26 = 0LL;
  if ( !v7 )
  {
    v13 = ParseName(a1, (char **)(a1 + 120), Src);
    v11 = (const void *)v13;
    if ( v13 )
    {
      LogError(v13);
      AcpiDiagTraceAmlError(a1, (int)v11);
      PrintDebugMessage(41, v11, 0LL, 0LL, 0LL);
      return (unsigned int)v11;
    }
    v14 = Src;
    v15 = 256LL;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v15;
    }
    while ( v15 );
    v16 = (256 - v15) & -(__int64)(v15 != 0);
    LODWORD(v11) = v15 == 0 ? 0xC000000D : 0;
    if ( v15 )
    {
      if ( v16 > 0x100 )
      {
        v9 = 256LL;
LABEL_18:
        v12 = 1;
        goto LABEL_19;
      }
    }
    else
    {
      v16 = 0LL;
    }
    v9 = v16 + 1;
    goto LABEL_18;
  }
  *v2 = v3 + 1;
  ParsePackageLen(a1 + 120, &v24);
  v8 = ParseIntObj(a1, v2, (__int64)&v25, 0);
  v9 = (unsigned int)v26;
  v10 = (_WORD *)v24;
  v11 = (const void *)v8;
  if ( v8 )
  {
    LogError(v8);
    AcpiDiagTraceAmlError(a1, (int)v11);
    PrintDebugMessage(40, v11, 0LL, 0LL, 0LL);
  }
  else if ( (unsigned __int64)*v2 > v24 || (unsigned int)v26 > (int)v24 - *(_DWORD *)v2 + 1 )
  {
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    PrintDebugMessage(42, (const void *)v9, (const void *)(unsigned int)((_DWORD)v10 - *(_DWORD *)v2), 0LL, 0LL);
    LODWORD(v11) = -1072431089;
  }
  v6 = *v2;
  v12 = 2;
  *v2 = v10;
LABEL_19:
  if ( (_DWORD)v11 )
    return (unsigned int)v11;
  v17 = *a2;
  if ( *a2 )
  {
    if ( *((unsigned int *)&v17->Next + 2) >= v9 )
      goto LABEL_29;
    HeapFree(v17);
    *a2 = 0LL;
  }
  if ( v9 > 0xFFFFFFEF )
  {
    LODWORD(v11) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    v18 = (const void *)v9;
    v19 = 39;
LABEL_27:
    PrintDebugMessage(v19, v18, 0LL, 0LL, 0LL);
    goto LABEL_29;
  }
  v20 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1314407240, (int)v9 + 16);
  *a2 = v20;
  if ( !v20 )
  {
    LODWORD(v11) = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v18 = 0LL;
    v19 = 126;
    goto LABEL_27;
  }
  *((_DWORD *)&v20->Next + 2) = v9;
LABEL_29:
  if ( *a2 )
  {
    *((_DWORD *)&(*a2)->Next + 3) = v9;
    LODWORD((*a2)->Next) = v12;
    v21 = *a2 + 1;
    v22 = *((_DWORD *)&(*a2)->Next + 3);
    if ( v12 == 2 )
    {
      memmove(v21, v6, v22);
    }
    else
    {
      memmove(v21, Src, v22 - 1);
      *((_BYTE *)&(*a2)[1].Next + (unsigned int)(*((_DWORD *)&(*a2)->Next + 3) - 1)) = 0;
    }
  }
  return (unsigned int)v11;
}
