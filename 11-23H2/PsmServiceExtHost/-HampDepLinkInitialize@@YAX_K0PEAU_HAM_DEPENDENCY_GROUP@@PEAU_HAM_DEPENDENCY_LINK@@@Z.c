/*
 * XREFs of ?HampDepLinkInitialize@@YAX_K0PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18003D234
 * Callers:
 *     ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18003D108 (-HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampDepLinkInitialize(
        __int64 a1,
        __int64 a2,
        struct _HAM_DEPENDENCY_GROUP *a3,
        struct _HAM_DEPENDENCY_LINK *a4)
{
  memset_0(a4, 0, 0x60uLL);
  RtlInitializeSRWLock((char *)a4 + 48);
  *((_DWORD *)a4 + 14) = 0;
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_QWORD *)a4 + 2) = -1LL;
  *((_QWORD *)a4 + 9) = (char *)a4 + 64;
  *((_QWORD *)a4 + 8) = (char *)a4 + 64;
  *((_QWORD *)a4 + 11) = (char *)a4 + 80;
  *((_QWORD *)a4 + 10) = (char *)a4 + 80;
  *((_QWORD *)a4 + 3) = a1;
  *((_QWORD *)a4 + 4) = a2;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 12) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a4 + 5) = a3;
}
