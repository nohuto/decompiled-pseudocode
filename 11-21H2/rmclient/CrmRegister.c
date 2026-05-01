/*
 * XREFs of CrmRegister @ 0x180004B50
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x1800019E8 (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180004BEC (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 */

__int64 __fastcall CrmRegister(struct _CRMP_REGISTRATION_CONTEXT **a1, unsigned int a2, __int64 a3)
{
  struct _CRMP_REGISTRATION_CONTEXT *Heap; // rax
  unsigned int v7; // ebx
  struct _CRMP_REGISTRATION_CONTEXT *v8; // rdi
  int v9; // esi

  Heap = (struct _CRMP_REGISTRATION_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    *(_OWORD *)Heap = 0LL;
    *(_DWORD *)Heap = 305;
    v9 = CrmpRegistrationContextStart(Heap, a2, a3);
    if ( v9 < 0 )
    {
      CrmpRegistrationContextCleanup(v8);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      return (unsigned int)v9;
    }
    else
    {
      *a1 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
