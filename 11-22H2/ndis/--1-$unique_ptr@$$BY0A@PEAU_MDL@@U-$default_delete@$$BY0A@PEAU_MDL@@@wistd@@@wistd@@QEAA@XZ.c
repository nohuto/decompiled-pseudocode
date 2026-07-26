/*
 * XREFs of ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B1698
 * Callers:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116EB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x1C011AA68 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x1C011B9DC (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 *     KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x1C011C968 (KRegKey--QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___.c)
 *     KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___ @ 0x1C011D4A0 (KRegKey--QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C011DDE0 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C011DED8 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C011E024 (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C011E2A8 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FD30 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x1C0139BAC (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x1C0139D00 (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0139E68 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x1C013A324 (KRegKey--QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C013AD64 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C01217AC (--_V@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete[](v1);
}
