/*
 * XREFs of sub_140A8CEB8 @ 0x140A8CEB8
 * Callers:
 *     sub_140A80820 @ 0x140A80820 (sub_140A80820.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140602294 @ 0x140602294 (sub_140602294.c)
 *     sub_1406022DC @ 0x1406022DC (sub_1406022DC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A81AE8 @ 0x140A81AE8 (sub_140A81AE8.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A8CEB8(char *P, const void *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v7; // eax
  unsigned int v8; // esi
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  KIRQL v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (P[71] & 0x21) != 0x21 )
  {
    v4 = sub_140AA5A48(P);
    v5 = (_QWORD *)v4;
    if ( v4 )
    {
      if ( *((char **)P + 4) != P + 32 )
      {
        sub_1405FFB44(0x20Cu, a2, P);
        sub_140AA5BCC(v5);
        return 1LL;
      }
      v7 = *(_DWORD *)(v4 + 56);
      if ( v5[30] )
      {
        if ( (v7 & 0x400000) == 0 )
          sub_1405FFB44(0x20Bu, a2, P);
        v8 = 1;
      }
      else
      {
        if ( (v7 & 0x200000) != 0 )
        {
          if ( (v7 & 8) != 0 )
          {
            v8 = 1;
            *(_WORD *)P = 0;
            if ( (P[71] & 1) != 0 )
            {
              PsReturnProcessNonPagedPoolQuota(v5[11], *((unsigned int *)v5 + 21));
              ObfDereferenceObjectWithTag((PVOID)v5[11], 0x49667256u);
            }
            v9 = (*((_DWORD *)v5 + 6))-- == 1;
            v12 = 0;
            if ( v9 )
            {
              sub_140602294(&v12);
              v11 = *v5;
              sub_14042A5E0(v5, *v5);
              *v5 = 0LL;
              sub_140A81AE8((_QWORD *)(qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (v11 >> 12))), v11);
              sub_1406022DC(v12);
            }
            _InterlockedDecrement((volatile signed __int32 *)v5 + 5);
            sub_140AA5BCC(v5);
            ExFreePoolWithTag(P, 0);
            return v8;
          }
          v9 = (*((_DWORD *)v5 + 6))-- == 1;
          v12 = 0;
          if ( v9 )
          {
            sub_140602294(&v12);
            v10 = *v5;
            sub_14042A5E0(v5, *v5);
            *v5 = 0LL;
            sub_140A81AE8((_QWORD *)(qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (v10 >> 12))), v10);
            sub_1406022DC(v12);
          }
          _InterlockedDecrement((volatile signed __int32 *)v5 + 5);
        }
        v8 = 0;
      }
      sub_140AA5BCC(v5);
      return v8;
    }
  }
  return 0LL;
}
