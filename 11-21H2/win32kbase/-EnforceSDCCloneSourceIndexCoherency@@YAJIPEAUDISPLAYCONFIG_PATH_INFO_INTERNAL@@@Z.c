/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0172190
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00DEB70 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall EnforceSDCCloneSourceIndexCoherency(unsigned int a1, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  char v2; // r13
  unsigned int v3; // esi
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *i; // rdi
  unsigned int v7; // ebp
  char *v8; // rbx
  int v9; // ecx
  char v10; // r15
  int v11; // edx
  bool v12; // zf
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v2 = 0;
  v3 = 0;
  if ( !a1 )
    return 0LL;
  for ( i = a2; *(__int64 *)i >= 0; i = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)i + 216) )
  {
LABEL_25:
    if ( ++v3 >= a1 )
      return 0LL;
  }
  v7 = v3;
  v8 = (char *)a2 + 216 * v3 + 16;
  while ( 1 )
  {
    if ( v7 != v3 )
    {
      v9 = *((_DWORD *)v8 + 2);
      v10 = 0;
      v11 = *((_DWORD *)i + 6);
      if ( v9 == v11 && *(_DWORD *)v8 == *((_DWORD *)i + 4) && *((_DWORD *)v8 + 1) == *((_DWORD *)i + 5) && v9 != -2 )
      {
        v12 = *((_DWORD *)v8 + 35) == *((_DWORD *)i + 39);
        goto LABEL_18;
      }
      if ( *((_DWORD *)v8 + 35) == *((_DWORD *)i + 39) )
        break;
    }
LABEL_24:
    ++v7;
    v8 += 216;
    if ( v7 >= a1 )
      goto LABEL_25;
  }
  if ( *(_DWORD *)v8 != *((_DWORD *)i + 4)
    || *((_DWORD *)v8 + 1) != *((_DWORD *)i + 5)
    || v9 != -2 && v11 != -2
    || v8[85] )
  {
    goto LABEL_19;
  }
  v12 = v9 == v11;
LABEL_18:
  v10 = 1;
  if ( v12 )
  {
LABEL_19:
    v13 = (-(__int64)(v10 != 0) & 0x8000000100LL) + 0x4000000020800LL;
    v14 = *(_QWORD *)i & v13;
    if ( (v13 & *((_QWORD *)v8 - 2)) != v14 )
    {
      v15 = ~v13 & *((_QWORD *)v8 - 1);
      *((_QWORD *)v8 - 2) = v14 | ~v13 & *((_QWORD *)v8 - 2);
      *((_QWORD *)v8 - 1) = v15 | v13 & *((_QWORD *)i + 1);
      if ( !v2 )
      {
        v2 = 1;
        DrvDxgkLogCodePointPacket(57, v3, v7, 0);
      }
    }
    *(_QWORD *)(v8 + 108) = *(_QWORD *)((char *)i + 124);
    *(_QWORD *)(v8 + 116) = *(_QWORD *)((char *)i + 132);
    *((_DWORD *)v8 + 35) = *((_DWORD *)i + 39);
    *(_QWORD *)(v8 + 100) = *(_QWORD *)((char *)i + 116);
    if ( v10 )
    {
      *((_QWORD *)v8 + 9) = *((_QWORD *)i + 11);
      *((_DWORD *)v8 + 20) = *((_DWORD *)i + 24);
    }
    goto LABEL_24;
  }
  WdLogSingleEntry2(2LL, v3, v7);
  return 3221225485LL;
}
