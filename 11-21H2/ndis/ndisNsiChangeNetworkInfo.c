/*
 * XREFs of ndisNsiChangeNetworkInfo @ 0x1C00B5A30
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B6310 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B67F0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002B1C8 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002D458 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0033F78 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     ndisIfReleaseSiteId @ 0x1C00B59FC (ndisIfReleaseSiteId.c)
 */

__int64 __fastcall ndisNsiChangeNetworkInfo(__int64 a1, __int64 a2, int a3, int a4, int *a5)
{
  int v6; // ebp
  unsigned int v9; // ebx
  int *v10; // rax
  char v11; // r13
  int v12; // r11d
  int v13; // r8d
  unsigned int v14; // r12d
  __int128 *v15; // rcx
  int v16; // ebp
  _OWORD *v18; // rdx
  __int64 v19; // rax
  __int128 v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r10
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v25; // r10
  struct _NDIS_IF_COMPARTMENT_BLOCK *v26; // rbp
  _QWORD *v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  int v34; // [rsp+98h] [rbp+20h]

  v6 = a3;
  v9 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      a2);
  v10 = a5;
  v11 = 0;
  v12 = v6;
  v34 = v6;
  v13 = a4;
  *a5 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
LABEL_13:
        v10 = a5;
        v6 = a3;
        break;
      }
      v14 = 0;
      if ( a4 )
      {
        if ( a4 == 4 )
        {
          v22 = *(_DWORD *)(a2 + 4);
          v14 = 4;
          if ( *(_DWORD *)(a1 + 84) != v22 )
          {
            v23 = *(_QWORD *)(a1 + 48);
            if ( !v23
              || *(_QWORD *)(v23 + 56) == a1
              || (CompartmentBlock = ndisIfFindCompartmentBlock(v22), (v26 = CompartmentBlock) == 0LL)
              || (*((_DWORD *)CompartmentBlock + 10) & 1) != 0 )
            {
LABEL_10:
              v9 = -1073741811;
              goto LABEL_11;
            }
            v27 = (_QWORD *)(a1 + 16);
            v28 = *(_QWORD *)(a1 + 16);
            if ( *(_QWORD *)(v28 + 8) != a1 + 16
              || (v29 = *(_QWORD **)(a1 + 24), (_QWORD *)*v29 != v27)
              || (*v29 = v28,
                  *(_QWORD *)(v28 + 8) = v29,
                  COMPARTMENTBLOCK_DECREMENT_REF(v25),
                  v30 = (_QWORD *)((char *)v26 + 24),
                  v31 = *((_QWORD *)v26 + 3),
                  *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(v31 + 8) != (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v26 + 24)) )
            {
              __fastfail(3u);
            }
            *v27 = v31;
            *(_QWORD *)(a1 + 24) = v30;
            *(_QWORD *)(v31 + 8) = v27;
            *v30 = v27;
            _InterlockedIncrement((volatile signed __int32 *)v26 + 11);
            v32 = *(_QWORD **)(a1 + 56);
            *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 4);
            *(_QWORD *)(a1 + 48) = v26;
            while ( v32 != (_QWORD *)(a1 + 56) )
            {
              *((_DWORD *)v32 - 172) = *(_DWORD *)(a2 + 4);
              v32[14] = *(_QWORD *)(a1 + 48);
              v32 = (_QWORD *)*v32;
            }
            v12 = v34;
          }
          v13 = 8;
        }
        else if ( a4 == 8 )
        {
          v21 = *(_DWORD *)(a2 + 8);
          v14 = 4;
          if ( v21 )
          {
            if ( v21 >= 0x7FFFFFF )
              goto LABEL_10;
            ndisIfReleaseSiteId(*(_DWORD *)(a1 + 88));
            *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 8);
          }
          v13 = 12;
        }
        else
        {
          if ( a4 == 12 )
          {
            v14 = 516;
            if ( !ndisIsValidIfStringParts((const wchar_t *)(a2 + 12), *(unsigned __int16 *)(a2 + 12)) )
              goto LABEL_10;
            v18 = (_OWORD *)(a1 + 92);
            v19 = 4LL;
            do
            {
              v20 = *v15;
              v15 += 8;
              *v18 = v20;
              v18 += 8;
              *(v18 - 7) = *(v15 - 7);
              *(v18 - 6) = *(v15 - 6);
              *(v18 - 5) = *(v15 - 5);
              *(v18 - 4) = *(v15 - 4);
              *(v18 - 3) = *(v15 - 3);
              *(v18 - 2) = *(v15 - 2);
              *(v18 - 1) = *(v15 - 1);
              --v19;
            }
            while ( v19 );
            v13 = 528;
            *(_DWORD *)v18 = *(_DWORD *)v15;
          }
          v11 = 1;
        }
      }
      else
      {
        v14 = 4;
        v13 = 4;
      }
      if ( !v9 && v14 && v12 >= v14 )
      {
        v12 += a4 - v13;
        a4 = v13;
        v34 = v12;
        goto LABEL_12;
      }
LABEL_11:
      v11 = 1;
LABEL_12:
      if ( v12 <= 0 )
        goto LABEL_13;
    }
  }
  v16 = v6 - v12;
  *v10 = v16;
  if ( !v16 )
    v9 = -1073741811;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      a2,
      v9);
  return v9;
}
