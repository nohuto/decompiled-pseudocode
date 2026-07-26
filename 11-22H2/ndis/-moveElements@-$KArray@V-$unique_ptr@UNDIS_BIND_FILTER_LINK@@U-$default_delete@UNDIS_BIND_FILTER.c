/*
 * XREFs of ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C011F358
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C01139CC (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C011EB60 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0030CE0 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

NDIS_BIND_FILTER_LINK **__fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  NDIS_BIND_FILTER_LINK **result; // rax
  unsigned int v7; // r15d
  unsigned int v9; // esi
  int v10; // r12d
  __int64 i; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // ebx
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r14d
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  if ( (_DWORD)a2 != a3 )
  {
    result = (NDIS_BIND_FILTER_LINK **)&retaddr;
    v7 = a2;
    if ( a4 )
    {
      if ( (unsigned int)a2 >= a3 )
      {
        v16 = a3;
        v17 = a2 - a3;
        if ( a3 < (unsigned int)a2 )
        {
          v18 = 8LL * a3;
          do
          {
            a2 = *(_QWORD *)(a1 + 8);
            v19 = v16 + v17;
            v20 = v19;
            ++v16;
            result = *(NDIS_BIND_FILTER_LINK ***)(a2 + 8 * v19);
            *(_QWORD *)(a2 + 8 * v20) = 0LL;
            *(_QWORD *)(v18 + a2) = result;
            v18 += 8LL;
          }
          while ( v16 < v7 );
        }
        v21 = a4 + a3;
        if ( v16 < v21 )
        {
          v22 = 8LL * v16;
          do
          {
            wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
              (NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a1 + 8) + 8LL * v16),
              a2);
            a2 = *(_QWORD *)(a1 + 8);
            v23 = v16 + v17;
            v24 = v23;
            ++v16;
            result = *(NDIS_BIND_FILTER_LINK ***)(a2 + 8 * v23);
            *(_QWORD *)(a2 + 8 * v24) = 0LL;
            *(_QWORD *)(v22 + a2) = result;
            v22 += 8LL;
          }
          while ( v16 < v21 );
        }
        if ( v16 < v7 + a4 )
        {
          v25 = v16;
          v26 = v7 + a4 - v16;
          v27 = 8 * v25;
          do
          {
            result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
                       (NDIS_BIND_FILTER_LINK **)(v27 + *(_QWORD *)(a1 + 8)),
                       a2);
            v27 += 8LL;
            --v26;
          }
          while ( v26 );
        }
      }
      else
      {
        v9 = a3 + a4;
        v10 = a3 - a2;
        for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 4); i = v9 - 1 )
        {
          a2 = *(_QWORD *)(a1 + 8);
          v12 = v9 - v10;
          --v9;
          result = (NDIS_BIND_FILTER_LINK **)(unsigned int)(v12 - 1);
          v13 = *(_QWORD *)(a2 + 8LL * (_QWORD)result);
          *(_QWORD *)(a2 + 8LL * (_QWORD)result) = 0LL;
          *(_QWORD *)(a2 + 8 * i) = v13;
        }
        if ( v9 > a3 )
        {
          do
          {
            v14 = v9 - 1;
            wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
              (NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a1 + 8) + 8 * v14),
              a2);
            a2 = *(_QWORD *)(a1 + 8);
            v15 = v9 - v10 - 1;
            result = *(NDIS_BIND_FILTER_LINK ***)(a2 + 8 * v15);
            *(_QWORD *)(a2 + 8 * v15) = 0LL;
            v9 = v14;
            *(_QWORD *)(a2 + 8 * v14) = result;
          }
          while ( (unsigned int)v14 > a3 );
        }
        while ( v9 > v7 )
          result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
                     (NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a1 + 8) + 8LL * --v9),
                     a2);
      }
    }
  }
  return result;
}
