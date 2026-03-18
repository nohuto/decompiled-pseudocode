/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1C0040440
 * Callers:
 *     HmgAlloc @ 0x1C003DD30 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 * Callees:
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C0040000 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0041730 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C007C3E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HmgIncProcessHandleCountEx(__int64 a1, char a2, int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rbp
  struct _W32PROCESS *W32ProcessFromId; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  int v13; // eax
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  LOBYTE(v15) = a2;
  v4 = a1;
  v5 = 1;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( v4 && v4 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(v4, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore();
      if ( a3 || (v11 = *((unsigned int *)W32ProcessFromId + 15), (int)v11 < *(_DWORD *)(v6 + 2376)) )
      {
        HmgpIncProcessHandleCountEx(W32ProcessFromId);
      }
      else
      {
        v13 = *((_DWORD *)W32ProcessFromId + 72);
        v5 = 0;
        if ( (v13 & 0x20) == 0 )
        {
          *((_DWORD *)W32ProcessFromId + 72) = v13 | 0x20;
          if ( (unsigned int)dword_1C02883D8 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x400000000000LL) )
            {
              v14[0] = 0x1000000LL;
              v15 = v11;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1C02883D8,
                (unsigned int)&unk_1C0256EF2,
                v11,
                v10,
                (__int64)&v15,
                (__int64)v14);
            }
          }
        }
      }
      GreReleaseHmgrSemaphore(v9, v8, v11, v10);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return v5;
}
