/*
 * XREFs of ?GetRmResourceSet@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKPEAURmResourceInfo@@@Z @ 0x180100570
 * Callers:
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800FEF1C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConstraintModelResourceManager::GetRmResourceSet(
        CConstraintModelResourceManager *this,
        struct _ResourceInfo *a2,
        __int64 a3,
        unsigned int a4,
        struct RmResourceInfo *a5)
{
  char *v5; // rcx
  int v6; // eax
  int v7; // eax

  if ( (_DWORD)a3 )
  {
    v5 = (char *)a5 + 16;
    a3 = (unsigned int)a3;
    if ( a4 <= 0x64 )
    {
      do
      {
        v7 = *(_DWORD *)a2;
        a2 = (struct _ResourceInfo *)((char *)a2 + 540);
        *((_DWORD *)v5 - 4) = v7;
        *((_QWORD *)v5 - 1) = *((unsigned int *)a2 - 134);
        *(_DWORD *)v5 = a4;
        *((_WORD *)v5 + 2) = 0;
        v5 += 24;
        --a3;
      }
      while ( a3 );
    }
    else
    {
      do
      {
        v6 = *(_DWORD *)a2;
        a2 = (struct _ResourceInfo *)((char *)a2 + 540);
        *((_DWORD *)v5 - 4) = v6;
        *((_QWORD *)v5 - 1) = *((unsigned int *)a2 - 134);
        *(_DWORD *)v5 = 100;
        *((_WORD *)v5 + 2) = 0;
        v5 += 24;
        --a3;
      }
      while ( a3 );
    }
  }
  return 0LL;
}
