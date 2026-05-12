/*
 * XREFs of RaidAdapterTargetedRescan @ 0x1C0038CE0
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C001A8B0 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C001C7E4 (RaidBusEnumeratorGetLunList.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     McTemplateK0zqquuuqpp_EtwWriteTransfer @ 0x1C0032E04 (McTemplateK0zqquuuqpp_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterTargetedRescan(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // esi
  ULONG v10; // edi
  struct _RTL_BITMAP *v11; // rcx
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ebp
  __int64 v16; // rbx
  unsigned int v17; // [rsp+60h] [rbp-148h]
  _QWORD v18[32]; // [rsp+70h] [rbp-138h] BYREF

  v4 = *(_QWORD *)(a1 + 4712);
  v5 = 0;
  v6 = 0;
  v10 = *(unsigned __int8 *)(v4 + 8);
  LOBYTE(v17) = *(_BYTE *)(v4 + 8);
  if ( Microsoft_Windows_StorPortEnableBits < 0 )
    McTemplateK0zqquuuqpp_EtwWriteTransfer(
      a1,
      a2,
      (__int64)a3,
      *(const wchar_t **)(a1 + 48),
      *(_DWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 4700),
      v10,
      *(_BYTE *)(v4 + 9),
      *(_BYTE *)(v4 + 10),
      *(_DWORD *)(a1 + 4704),
      *(_QWORD *)(a1 + 4720),
      *(_QWORD *)(a1 + 4728));
  if ( (*(_DWORD *)(a1 + 4700) & 4) != 0 )
  {
    v5 = *(unsigned __int8 *)(a1 + 441);
    if ( *(_QWORD *)(a1 + 4752) )
    {
      v11 = (struct _RTL_BITMAP *)(a1 + 4736);
      if ( (*(_DWORD *)(a1 + 4704) & 1) != 0 )
        RtlSetBit(v11, v10);
      else
        RtlClearBit(v11, v10);
    }
  }
  if ( a4 == 1 )
    return 0LL;
  v13 = *(_DWORD *)(a1 + 4700);
  if ( (v13 & 2) != 0 )
  {
    v14 = *(unsigned __int8 *)(v4 + 9);
    v5 = v14 + 1;
  }
  else
  {
    v14 = 0;
    if ( (v13 & 1) != 0 )
    {
      *(_WORD *)((char *)&v17 + 1) = *(_WORD *)(v4 + 9);
      HIBYTE(v17) = 0;
      return RaidBusEnumeratorVisitUnit(a3, v17);
    }
  }
  v15 = *(unsigned __int8 *)(a1 + 490);
  memset(v18, 1, 0xFFuLL);
  while ( 1 )
  {
    if ( v14 >= v5 )
      return v6;
    HIBYTE(v17) = 0;
    BYTE1(v17) = v14;
    result = RaidBusEnumeratorGetLunList(a3, (unsigned __int16)v17, v18);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    v16 = 0LL;
    if ( v15 )
      break;
LABEL_20:
    ++v14;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)v18 + v16) )
    {
      BYTE2(v17) = v16;
      result = RaidBusEnumeratorVisitUnit(a3, v17);
      v6 = result;
      if ( (int)result < 0 )
        return result;
    }
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= v15 )
      goto LABEL_20;
  }
}
