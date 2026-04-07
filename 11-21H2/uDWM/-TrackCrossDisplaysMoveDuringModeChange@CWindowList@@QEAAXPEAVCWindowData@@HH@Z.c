/*
 * XREFs of ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x180036160
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18005F568 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800B44B4 (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B8360 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall CWindowList::TrackCrossDisplaysMoveDuringModeChange(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // rdx
  int v5; // r9d
  int v6; // r10d
  _WORD *v7; // rax
  struct tagRECT v8; // xmm0
  int v9; // r8d
  int v10; // edx
  HMONITOR v11; // rbx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  POINT v16; // [rsp+30h] [rbp-40h] BYREF
  POINT pt; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+48h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 73) )
  {
    if ( *((_QWORD *)a2 + 55) )
    {
      if ( *((_QWORD *)a2 + 56) )
      {
        if ( CWindowData::IsWindowVisibleAndUncloaked(a2) && (*(_BYTE *)(v4 + 666) & 0x40) == 0 )
        {
          v7 = *(_WORD **)(v4 + 16);
          if ( v7 )
          {
            if ( *v7 )
            {
              if ( (*(_BYTE *)(v4 + 670) & 8) == 0 )
              {
                v8 = *(struct tagRECT *)(v4 + 48);
                v9 = v5 - *(_DWORD *)(v4 + 52);
                v10 = v6 - *(_DWORD *)(v4 + 48);
                rc = v8;
                OffsetRect(&rc, v10, v9);
                pt.x = (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v8, 8)) + _mm_cvtsi128_si32((__m128i)v8)) / 2;
                pt.y = (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v8, 12))
                      + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v8, 4)))
                     / 2;
                v16.x = (rc.left + rc.right) / 2;
                v16.y = (rc.top + rc.bottom) / 2;
                v11 = MonitorFromPoint(pt, 0);
                if ( v11 != MonitorFromPoint(v16, 0) )
                {
                  if ( (unsigned int)dword_1801418A0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801418A0, 1LL) )
                  {
                    v16 = (POINT)*((_QWORD *)a2 + 2);
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                      v12,
                      (unsigned int)&unk_180120F81,
                      v13,
                      v14,
                      (__int64)&v16);
                  }
                  v15 = *((_QWORD *)this + 73);
                  v16 = (POINT)a2;
                  if ( a2 && *((_QWORD *)a2 + 56) && !*(_BYTE *)(v15 + 312) )
                    std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
                      v15 + 384,
                      &pt,
                      &v16);
                }
              }
            }
          }
        }
      }
    }
  }
}
