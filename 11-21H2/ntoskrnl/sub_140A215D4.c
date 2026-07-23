/*
 * XREFs of sub_140A215D4 @ 0x140A215D4
 * Callers:
 *     sub_140A21408 @ 0x140A21408 (sub_140A21408.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     sub_140A217B8 @ 0x140A217B8 (sub_140A217B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A215D4(__int64 a1)
{
  __int64 v1; // r9
  int v3; // eax
  PVOID v4; // r8
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v10; // edx
  _BYTE *v11; // rax
  PVOID P[2]; // [rsp+20h] [rbp-68h] BYREF
  wchar_t Dst[32]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(unsigned int *)(a1 + 4);
  P[0] = 0LL;
  swprintf_s(Dst, 0x20uLL, L"\\??\\PhysicalDrive%d", v1);
  v3 = sub_140A217B8(Dst, P);
  v4 = P[0];
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( *(_DWORD *)P[0] )
    {
      if ( *(_DWORD *)P[0] == 1 )
      {
        v6 = *((_DWORD *)P[0] + 1);
        v7 = 0LL;
        if ( v6 )
        {
          while ( 1 )
          {
            v8 = *((_QWORD *)P[0] + 18 * v7 + 10) - 0x11D2F81FC12A7328LL;
            if ( *((_QWORD *)P[0] + 18 * v7 + 10) == 0x11D2F81FC12A7328LL )
              v8 = *((_QWORD *)P[0] + 18 * v7 + 11) - 0x3BC93EC9A0004BBALL;
            if ( !v8 )
              break;
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= v6 )
              goto LABEL_9;
          }
LABEL_18:
          *(_DWORD *)(a1 + 8) = *((_DWORD *)P[0] + 36 * v7 + 18);
          goto LABEL_10;
        }
      }
    }
    else
    {
      v10 = *((_DWORD *)P[0] + 1);
      v7 = 0LL;
      if ( v10 )
      {
        v11 = (char *)P[0] + 81;
        while ( !*v11 )
        {
          v7 = (unsigned int)(v7 + 1);
          v11 += 144;
          if ( (unsigned int)v7 >= v10 )
            goto LABEL_9;
        }
        goto LABEL_18;
      }
    }
LABEL_9:
    v5 = -1073741275;
  }
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
