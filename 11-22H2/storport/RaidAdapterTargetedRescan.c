/*
 * XREFs of RaidAdapterTargetedRescan @ 0x1C003A2BC
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0015C98 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0017C9C (RaidBusEnumeratorGetLunList.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     McTemplateK0zqquuuqpp_EtwWriteTransfer @ 0x1C0033A64 (McTemplateK0zqquuuqpp_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterTargetedRescan(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v4; // rbp
  int *v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // edi
  ULONG v11; // r12d
  struct _RTL_BITMAP *v12; // rcx
  __int64 result; // rax
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  __int64 v17; // rsi
  unsigned int v18; // [rsp+60h] [rbp-158h]
  _QWORD v19[32]; // [rsp+70h] [rbp-148h] BYREF

  v4 = *(_QWORD *)(a1 + 4776);
  v5 = (int *)(a1 + 4764);
  v6 = 0;
  v7 = 0;
  v11 = *(unsigned __int8 *)(v4 + 8);
  LOBYTE(v18) = *(_BYTE *)(v4 + 8);
  if ( Microsoft_Windows_StorPortEnableBits < 0 )
    McTemplateK0zqquuuqpp_EtwWriteTransfer(
      a1,
      a2,
      (__int64)a3,
      *(const wchar_t **)(a1 + 48),
      *(_DWORD *)(a1 + 56),
      *v5,
      v11,
      *(_BYTE *)(v4 + 9),
      *(_BYTE *)(v4 + 10),
      *(_DWORD *)(a1 + 4768),
      *(_QWORD *)(a1 + 4784),
      *(_QWORD *)(a1 + 4792));
  if ( (*v5 & 4) != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 441);
    if ( *(_QWORD *)(a1 + 4816) )
    {
      v12 = (struct _RTL_BITMAP *)(a1 + 4800);
      if ( (*(_DWORD *)(a1 + 4768) & 1) != 0 )
        RtlSetBit(v12, v11);
      else
        RtlClearBit(v12, v11);
    }
  }
  if ( a4 == 1 )
    return 0LL;
  v14 = *v5;
  if ( (*v5 & 2) != 0 )
  {
    v15 = *(unsigned __int8 *)(v4 + 9);
    v6 = v15 + 1;
  }
  else
  {
    v15 = 0;
    if ( (v14 & 1) != 0 )
    {
      *(_WORD *)((char *)&v18 + 1) = *(_WORD *)(v4 + 9);
      HIBYTE(v18) = 0;
      return RaidBusEnumeratorVisitUnit(a3, v18);
    }
  }
  v16 = *(unsigned __int8 *)(a1 + 490);
  memset_0(v19, 1, 0xFFuLL);
  while ( 1 )
  {
    if ( v15 >= v6 )
      return v7;
    HIBYTE(v18) = 0;
    BYTE1(v18) = v15;
    result = RaidBusEnumeratorGetLunList(a3, (unsigned __int16)v18, v19);
    v7 = result;
    if ( (int)result < 0 )
      return result;
    v17 = 0LL;
    if ( v16 )
      break;
LABEL_20:
    ++v15;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)v19 + v17) )
    {
      BYTE2(v18) = v17;
      result = RaidBusEnumeratorVisitUnit(a3, v18);
      v7 = result;
      if ( (int)result < 0 )
        return result;
    }
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= v16 )
      goto LABEL_20;
  }
}
