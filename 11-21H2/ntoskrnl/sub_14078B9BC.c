/*
 * XREFs of sub_14078B9BC @ 0x14078B9BC
 * Callers:
 *     sub_14078ACE0 @ 0x14078ACE0 (sub_14078ACE0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402E08A0 @ 0x1402E08A0 (sub_1402E08A0.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14078BC74 @ 0x14078BC74 (sub_14078BC74.c)
 *     sub_14078BEA4 @ 0x14078BEA4 (sub_14078BEA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078B9BC(__int64 a1)
{
  _DWORD *Pool2; // rdi
  char v2; // si
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  const WCHAR *v13; // r13
  _QWORD **v14; // r12
  _QWORD *v15; // r14
  char v16; // al
  _QWORD *v17; // rsi
  __int64 v19; // rdx
  ULONG v20; // r8d
  char v21; // [rsp+80h] [rbp+8h]
  char v22; // [rsp+88h] [rbp+10h]

  Pool2 = 0LL;
  v2 = 0;
  v21 = 0;
  v3 = 0;
  v22 = 0;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4006LL;
  if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4006LL )
    v6 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4007LL;
  if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4007LL )
    v7 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A400DLL;
  if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A400DLL )
    v8 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
  if ( !v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4008LL;
  if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4008LL )
    v9 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(a1 + 72) - 0x11D18D23ACA73F8ELL;
  if ( *(_QWORD *)(a1 + 72) == 0x11D18D23ACA73F8ELL )
    v10 = *(_QWORD *)(a1 + 80) + 0x2F8E8A07FFFF8254LL;
  if ( !v10 )
  {
LABEL_16:
    v11 = *(_DWORD *)(a1 + 88) - 1;
    if ( v11 )
    {
      if ( v11 != 2 )
        return (unsigned int)v3;
      v21 = 1;
      v12 = 128LL;
    }
    else
    {
      v12 = 120LL;
    }
    v13 = (const WCHAR *)(v12 + a1);
    if ( *(_BYTE *)(a1 + 68) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4096LL, 1500540496LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v4 = 1;
    }
    ExAcquireFastMutex(&stru_140C46400);
    v14 = (_QWORD **)((char *)&unk_140C46600 + 16 * (unsigned int)sub_1402E08A0(v13));
    v15 = *v14;
    if ( *v14 != v14 )
    {
      v16 = v21;
      do
      {
        v17 = v15;
        v15 = (_QWORD *)*v15;
        if ( !v16 || !*((_BYTE *)v17 + 40) )
        {
          if ( wcsicmp(v13, *(const wchar_t **)(v17[3] + 16LL))
            || !(unsigned __int8)sub_14078BEA4(a1, v17)
            || (v3 = sub_14078BC74(a1, v17), v3 < 0) )
          {
            v16 = v21;
          }
          else
          {
            v16 = v21;
            if ( Pool2 )
            {
              if ( v4 >= 0x400 )
              {
                v2 = 1;
                v22 = 1;
                continue;
              }
              v19 = v4++;
              Pool2[v19] = *((_DWORD *)v17 + 12);
            }
          }
        }
        v2 = v22;
      }
      while ( v15 != v14 );
    }
    if ( Pool2 && v4 > 1 )
    {
      if ( v2 )
      {
        memset(Pool2 + 1, 0, 0xFFCuLL);
        *Pool2 = -1;
        v20 = 4;
      }
      else
      {
        v20 = 4096;
        *Pool2 = v4 - 1;
      }
      ZwUpdateWnfStateData(&stru_14000E198, Pool2, v20, 0LL, 0LL, 0, 0);
    }
    KeReleaseGuardedMutex(&stru_140C46400);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x59706E50u);
  }
  return (unsigned int)v3;
}
