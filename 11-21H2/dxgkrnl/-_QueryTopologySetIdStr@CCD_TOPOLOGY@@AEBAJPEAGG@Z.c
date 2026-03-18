/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01D7008
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF5C4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000EFE8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0019D70 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C01D7150 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C01D79E0 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C03A97A4 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

NTSTATUS __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(CCD_TOPOLOGY *this, unsigned __int16 *a2, unsigned __int16 a3)
{
  __int64 v4; // rdx
  int v6; // ebp
  unsigned __int16 v7; // bx
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // r13d
  NTSTATUS result; // eax
  __int64 v15; // rcx
  __int64 v16; // r12
  unsigned __int16 v17; // bx
  unsigned __int16 *v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int16 v21; // [rsp+70h] [rbp+8h]
  unsigned __int16 v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h]

  v22 = a3;
  v4 = *((_QWORD *)this + 8);
  if ( !*(_WORD *)(v4 + 20) )
  {
    *a2 = 0;
    return 0;
  }
  v6 = -1073741823;
  v21 = 0;
  v7 = 16385;
  v8 = 0;
  while ( 1 )
  {
    v9 = 296LL * v8;
    if ( DxgkIsTargetNonStandard((const struct _LUID *)(v9 + v4 + 72), *(_DWORD *)(v9 + v4 + 84)) )
    {
      *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 320) = 0;
      goto LABEL_8;
    }
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
      break;
LABEL_8:
    v4 = *((_QWORD *)this + 8);
    if ( ++v8 >= *(unsigned __int16 *)(v4 + 20) )
      return v6;
  }
  if ( v8 )
  {
    if ( !v7 )
      return -1073741811;
    result = RtlStringCchCopyW(a2, v7, L"+");
    if ( result == -2147483643 )
      return -1073741789;
    if ( result < 0 )
      return result;
    --v7;
    ++a2;
  }
  v10 = *((_QWORD *)this + 8);
  v22 = 0;
  v11 = CCD_TOPOLOGY::_QueryMonitorIdStr(
          (const struct _LUID *)(v9 + v10 + 72),
          *(_DWORD *)(v9 + v10 + 84),
          a2,
          v7,
          &v22);
  v12 = *((_QWORD *)this + 8);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v13 = v8 + 1;
    v7 -= v22;
    *(_DWORD *)(v12 + v9 + 320) = v21++;
    a2 += v22;
    if ( v8 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      while ( 1 )
      {
        if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v8, v13, 0) )
        {
          v15 = *((_QWORD *)this + 8);
          v16 = 296LL * v13;
          v23 = v13;
          if ( *(_DWORD *)(v16 + v15 + 72) == *(_DWORD *)(v9 + v15 + 72)
            && *(_DWORD *)(v16 + v15 + 76) == *(_DWORD *)(v9 + v15 + 76)
            && *(_DWORD *)(v16 + v15 + 84) == *(_DWORD *)(v9 + v15 + 84) )
          {
            WdLogSingleEntry0(1LL);
          }
          if ( !v7 )
            return -1073741811;
          result = RtlStringCchCopyW(a2, v7, L"*");
          if ( result == -2147483643 )
            return -1073741789;
          if ( result < 0 )
            return result;
          v17 = v7 - 1;
          v18 = a2 + 1;
          v19 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                  (const struct _LUID *)(v16 + *((_QWORD *)this + 8) + 72LL),
                  *(_DWORD *)(v16 + *((_QWORD *)this + 8) + 84),
                  v18,
                  v17,
                  &v22);
          v20 = *((_QWORD *)this + 8);
          v6 = v19;
          if ( v19 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v19,
              *(unsigned int *)(296 * v23 + v20 + 84),
              v20,
              *(int *)(296 * v23 + v20 + 76),
              *(unsigned int *)(v20 + v16 + 72));
            return v6;
          }
          v7 = v17 - v22;
          *(_DWORD *)(v20 + v16 + 320) = v21++;
          a2 = &v18[v22];
        }
        if ( ++v13 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  WdLogSingleEntry5(
    2LL,
    v11,
    *(unsigned int *)(296LL * v8 + v12 + 84),
    v12,
    *(int *)(296LL * v8 + v12 + 76),
    *(unsigned int *)(v12 + v9 + 72));
  return v6;
}
