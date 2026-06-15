/*
 * XREFs of ?ValidateSecurityDescriptorDacl@@YAHPEAU_ACL@@0@Z @ 0x1800575B4
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x18005730C (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 */

void *__fastcall ValidateSecurityDescriptorDacl(PACL pAcl, PACL a2)
{
  void *result; // rax
  void *v5; // r14
  DWORD v6; // esi
  DWORD v7; // ebx
  DWORD v8; // esi
  LPVOID pAce; // [rsp+58h] [rbp+10h] BYREF
  LPVOID Buf1; // [rsp+60h] [rbp+18h] BYREF

  result = HeapAlloc(hHeap, 0, 4LL * a2->AceCount);
  v5 = result;
  if ( result )
  {
    memset_0(result, 0, 4LL * a2->AceCount);
    v6 = 0;
    if ( pAcl->AceCount )
    {
LABEL_3:
      v7 = 0;
      if ( !GetAce(pAcl, v6, &pAce) )
      {
LABEL_12:
        HeapFree(hHeap, 0, v5);
        return (void *)v7;
      }
      if ( a2->AceCount )
      {
        while ( GetAce(a2, v7, &Buf1) )
        {
          if ( *((_WORD *)Buf1 + 1) == *((_WORD *)pAce + 1) && !memcmp_0(Buf1, pAce, *((unsigned __int16 *)pAce + 1)) )
          {
            ++v6;
            *((_DWORD *)v5 + v7) = 1;
            if ( v6 < pAcl->AceCount )
              goto LABEL_3;
            v8 = 0;
            v7 = 1;
            if ( a2->AceCount )
            {
              while ( *((_DWORD *)v5 + v8) || GetAce(a2, v8, &pAce) && (*((_BYTE *)pAce + 1) & 0x10) != 0 )
              {
                if ( ++v8 >= a2->AceCount )
                  goto LABEL_12;
              }
              break;
            }
            goto LABEL_12;
          }
          if ( ++v7 >= a2->AceCount )
            break;
        }
      }
    }
    v7 = 0;
    goto LABEL_12;
  }
  return result;
}
