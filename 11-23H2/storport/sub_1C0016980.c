/*
 * XREFs of sub_1C0016980 @ 0x1C0016980
 * Callers:
 *     sub_1C00166D4 @ 0x1C00166D4 (sub_1C00166D4.c)
 * Callees:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C00188AC @ 0x1C00188AC (sub_1C00188AC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C0016980(unsigned __int8 *a1, __int64 a2, CMSPAddress *a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  int v8; // ebp
  int v9; // esi
  __int64 result; // rax
  __int64 i; // rdi
  unsigned int v12; // [rsp+20h] [rbp-148h]
  _BYTE Dst[256]; // [rsp+30h] [rbp-138h] BYREF

  v3 = a1[416];
  v5 = a1[441];
  v6 = 0;
  v7 = a1[490];
  memset_0(Dst, 1, 0xFFuLL);
  v8 = 0;
  if ( !v3 )
    return v6;
  while ( 1 )
  {
    v9 = 0;
    if ( v5 )
      break;
LABEL_9:
    if ( ++v8 >= v3 )
      return v6;
  }
  LOBYTE(v12) = v8;
  HIBYTE(v12) = 0;
  while ( 1 )
  {
    *(_WORD *)((char *)&v12 + 1) = (unsigned __int8)v9;
    result = sub_1C00188AC(a3, v12, Dst);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
    {
      if ( Dst[i] )
      {
        BYTE2(v12) = i;
        result = CMSPAddress::get_DynamicTerminalClasses(a3, (struct tagVARIANT *)v12);
        v6 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( ++v9 >= v5 )
      goto LABEL_9;
  }
}
