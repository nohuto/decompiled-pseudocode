/*
 * XREFs of PnpGetDeviceDependencyList @ 0x140942E94
 * Callers:
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     PiListEntryToDependencyEdge @ 0x14055F84C (PiListEntryToDependencyEdge.c)
 *     PiGetDependentList @ 0x14076BBF4 (PiGetDependentList.c)
 *     PiGetProviderList @ 0x140775110 (PiGetProviderList.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 */

__int64 __fastcall PnpGetDeviceDependencyList(__int64 a1, int a2, wchar_t *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r15
  int v6; // esi
  int v7; // ebx
  int v8; // r12d
  size_t v9; // rdi
  wchar_t *v10; // r14
  __int64 *DependentList; // rax
  __int64 *v12; // r15
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // r11
  unsigned __int16 *v19; // r12
  unsigned __int16 *v20; // r13
  wchar_t *v21; // r15
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+30h] [rbp-48h] BYREF
  size_t pcchRemaining; // [rsp+38h] [rbp-40h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-30h]
  _QWORD *v27; // [rsp+50h] [rbp-28h]
  unsigned __int16 *v28; // [rsp+58h] [rbp-20h]
  __int64 *v29; // [rsp+60h] [rbp-18h]
  size_t pcchLength; // [rsp+C0h] [rbp+48h] BYREF
  int v31; // [rsp+C8h] [rbp+50h]
  wchar_t *v32; // [rsp+D0h] [rbp+58h]
  unsigned int v33; // [rsp+D8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v5 = *(_QWORD *)(a1 + 32);
  pcchLength = 0LL;
  v6 = 0;
  pcchRemaining = a4;
  v7 = 0;
  psz = 0LL;
  v8 = a2;
  v9 = a4;
  v10 = a3;
  ppszDestEnd = a3;
  PnpAcquireDependencyRelationsLock(0);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v7 = -1073741811;
      goto LABEL_34;
    }
    DependentList = PiGetDependentList(v5);
  }
  else
  {
    DependentList = PiGetProviderList(v5);
  }
  v12 = (__int64 *)*DependentList;
  v13 = DependentList;
  v26 = DependentList;
  if ( v12 != DependentList )
  {
    do
    {
      v14 = PiListEntryToDependencyEdge((__int64)v12, v8);
      v12 = (__int64 *)*v12;
      v29 = v12;
      if ( v8 )
        v15 = *(_QWORD *)(v14 + 40);
      else
        v15 = *(_QWORD *)(v14 + 32);
      v16 = *(_QWORD *)(v15 + 48);
      if ( v16 && (v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL)) != 0 && *(_QWORD *)(v17 + 48) )
      {
        v7 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(v17 + 48), 0xC8uLL, &pcchLength);
        if ( v7 < 0 )
          goto LABEL_34;
        v6 += ++pcchLength;
        if ( pcchLength <= v9 )
        {
          v7 = RtlStringCchCopyExW(v10, v9, *(NTSTRSAFE_PCWSTR *)(v18 + 48), &ppszDestEnd, &pcchRemaining, 0x800u);
          if ( v7 < 0 )
            goto LABEL_34;
          v10 = ppszDestEnd + 1;
          v9 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
        }
      }
      else
      {
        v19 = *(unsigned __int16 **)(v15 + 56);
        v28 = (unsigned __int16 *)(v15 + 56);
        if ( v19 != (unsigned __int16 *)(v15 + 56) )
        {
          while ( 1 )
          {
            v20 = v19;
            v19 = *(unsigned __int16 **)v19;
            v27 = v20 + 8;
            v7 = PnpUnicodeStringToWstr((__int16 **)&psz, 0LL, v20 + 8);
            if ( v7 < 0 )
              goto LABEL_34;
            v21 = (wchar_t *)psz;
            v7 = RtlStringCchLengthW(psz, 0x7FFFuLL, &pcchLength);
            if ( v7 < 0 )
              goto LABEL_29;
            v6 += ++pcchLength;
            if ( pcchLength <= v9 )
            {
              v7 = RtlStringCchCopyExW(v10, v9, v21, &ppszDestEnd, &pcchRemaining, 0x800u);
              if ( v7 < 0 )
              {
LABEL_29:
                PnpUnicodeStringToWstrFree(v21, (__int64)(v20 + 8));
                goto LABEL_34;
              }
              v10 = ppszDestEnd + 1;
              v9 = pcchRemaining - 1;
              ++ppszDestEnd;
              --pcchRemaining;
            }
            PnpUnicodeStringToWstrFree(v21, (__int64)v27);
            if ( v19 == v28 )
            {
              v12 = v29;
              v13 = v26;
              break;
            }
          }
        }
        if ( v7 < 0 )
          goto LABEL_34;
        v8 = v31;
      }
    }
    while ( v12 != v13 );
    if ( v7 < 0 )
      goto LABEL_34;
  }
  if ( ++v6 <= v33 )
    v32[v6 - 1] = 0;
  else
    v7 = -1073741789;
LABEL_34:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
  {
    if ( a5 )
      *a5 = v6;
  }
  return (unsigned int)v7;
}
