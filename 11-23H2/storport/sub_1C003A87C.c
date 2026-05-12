/*
 * XREFs of sub_1C003A87C @ 0x1C003A87C
 * Callers:
 *     sub_1C00166D4 @ 0x1C00166D4 (sub_1C00166D4.c)
 * Callees:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C00188AC @ 0x1C00188AC (sub_1C00188AC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0033F78 @ 0x1C0033F78 (sub_1C0033F78.c)
 */

__int64 __fastcall sub_1C003A87C(__int64 a1, __int64 a2, CMSPAddress *a3, char a4)
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
  _QWORD Dst[32]; // [rsp+70h] [rbp-148h] BYREF

  v4 = *(_QWORD *)(a1 + 4776);
  v5 = (int *)(a1 + 4764);
  v6 = 0;
  v7 = 0;
  v11 = *(unsigned __int8 *)(v4 + 8);
  LOBYTE(v18) = *(_BYTE *)(v4 + 8);
  if ( byte_1C0093A00 < 0 )
    sub_1C0033F78(
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
      return CMSPAddress::get_DynamicTerminalClasses(a3, (struct tagVARIANT *)v18);
    }
  }
  v16 = *(unsigned __int8 *)(a1 + 490);
  memset_0(Dst, 1, 0xFFuLL);
  while ( 1 )
  {
    if ( v15 >= v6 )
      return v7;
    HIBYTE(v18) = 0;
    BYTE1(v18) = v15;
    result = sub_1C00188AC((__int64 *)a3, (unsigned __int16)v18, Dst);
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
    if ( *((_BYTE *)Dst + v17) )
    {
      BYTE2(v18) = v17;
      result = CMSPAddress::get_DynamicTerminalClasses(a3, (struct tagVARIANT *)v18);
      v7 = result;
      if ( (int)result < 0 )
        return result;
    }
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= v16 )
      goto LABEL_20;
  }
}
